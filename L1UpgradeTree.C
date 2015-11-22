#define L1UpgradeTree_cxx
#include "L1UpgradeTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <bitset>

void L1UpgradeTree::Loop(int n)
{
  //   In a ROOT session, you can do:
  //      root> .L L1UpgradeTree.C
  //      root> L1UpgradeTree t
  //      root> t.GetEntry(12); // Fill t data members with entry number 12
  //      root> t.Show();       // Show values of entry 12
  //      root> t.Show(16);     // Read and show values of entry 16
  //      root> t.Loop();       // Loop on all entries
  //

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  
  Long64_t nbytes = 0, nb = 0;
  
  int bits[13] = {};
  
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    if(jentry%999999==0) cout<<jentry<<"/"<<nentries<<endl;
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    for(int i = 0 ; i < 12 ; ++i)
    {
      bits[i] += ((hfring_hwPt[0][0])>>i)&0x1;
    }
  }
  std::cout<<"bit #,";
  for(int i = 0 ; i < 13 ; ++i)
  {
    std::cout<<i<<",";
  }
  std::cout<<std::endl;
  std::cout<<"bits ,";
  for(int i = 0 ; i < 13 ; ++i)
  {
    std::cout<<bits[i]<<",";
  }
  std::cout<<std::endl;
  
}
