//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 12 13:10:03 2015 by ROOT version 6.02/10
// from TTree L1UpgradeTree/L1 Trigger Upgrade Dataformats
// found on file: L1EmulatorPP_v1.root
//////////////////////////////////////////////////////////

#ifndef L1UpgradeTree_h
#define L1UpgradeTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"

class L1UpgradeTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           event;
   Int_t           run;
   Int_t           lumi;
   Int_t           nJet;
   vector<int>     *jet_hwPt;
   vector<int>     *jet_hwEta;
   vector<int>     *jet_hwPhi;
   vector<int>     *jet_hwQual;
   vector<int>     *jet_hwIso;
   vector<int>     *jet_bx;
   vector<double>  *jet_pt;
   vector<double>  *jet_eta;
   vector<double>  *jet_phi;
   Int_t           nTau;
   vector<int>     *tau_hwPt;
   vector<int>     *tau_hwEta;
   vector<int>     *tau_hwPhi;
   vector<int>     *tau_hwQual;
   vector<int>     *tau_hwIso;
   vector<int>     *tau_bx;
   vector<double>  *tau_pt;
   vector<double>  *tau_eta;
   vector<double>  *tau_phi;
   Int_t           nIsotau;
   vector<int>     *isotau_hwPt;
   vector<int>     *isotau_hwEta;
   vector<int>     *isotau_hwPhi;
   vector<int>     *isotau_hwQual;
   vector<int>     *isotau_hwIso;
   vector<int>     *isotau_bx;
   vector<double>  *isotau_pt;
   vector<double>  *isotau_eta;
   vector<double>  *isotau_phi;
   Int_t           nEgamma;
   vector<int>     *egamma_hwPt;
   vector<int>     *egamma_hwEta;
   vector<int>     *egamma_hwPhi;
   vector<int>     *egamma_hwQual;
   vector<int>     *egamma_hwIso;
   vector<int>     *egamma_bx;
   vector<double>  *egamma_pt;
   vector<double>  *egamma_eta;
   vector<double>  *egamma_phi;
   Int_t           nEtsum;
   vector<int>     *etsum_hwPt;
   vector<int>     *etsum_hwEta;
   vector<int>     *etsum_hwPhi;
   vector<int>     *etsum_hwQual;
   vector<int>     *etsum_hwIso;
   vector<int>     *etsum_type;
   vector<int>     *etsum_bx;
   vector<double>  *etsum_pt;
   vector<double>  *etsum_eta;
   vector<double>  *etsum_phi;
   Int_t           nHfring;
   vector<int>     *hfring_hwPt;
   vector<int>     *hfring_hwEta;
   vector<int>     *hfring_hwPhi;
   vector<int>     *hfring_hwQual;
   vector<int>     *hfring_hwIso;
   vector<int>     *hfring_bx;
   vector<double>  *hfring_pt;
   vector<double>  *hfring_eta;
   vector<double>  *hfring_phi;
   Int_t           nHfbits;
   vector<int>     *hfbits_hwPt;
   vector<int>     *hfbits_hwEta;
   vector<int>     *hfbits_hwPhi;
   vector<int>     *hfbits_hwQual;
   vector<int>     *hfbits_hwIso;
   vector<int>     *hfbits_bx;
   vector<double>  *hfbits_pt;
   vector<double>  *hfbits_eta;
   vector<double>  *hfbits_phi;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_jet_hwPt;   //!
   TBranch        *b_jet_hwEta;   //!
   TBranch        *b_jet_hwPhi;   //!
   TBranch        *b_jet_hwQual;   //!
   TBranch        *b_jet_hwIso;   //!
   TBranch        *b_jet_bx;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_tau_hwPt;   //!
   TBranch        *b_tau_hwEta;   //!
   TBranch        *b_tau_hwPhi;   //!
   TBranch        *b_tau_hwQual;   //!
   TBranch        *b_tau_hwIso;   //!
   TBranch        *b_tau_bx;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_nIsotau;   //!
   TBranch        *b_isotau_hwPt;   //!
   TBranch        *b_isotau_hwEta;   //!
   TBranch        *b_isotau_hwPhi;   //!
   TBranch        *b_isotau_hwQual;   //!
   TBranch        *b_isotau_hwIso;   //!
   TBranch        *b_isotau_bx;   //!
   TBranch        *b_isotau_pt;   //!
   TBranch        *b_isotau_eta;   //!
   TBranch        *b_isotau_phi;   //!
   TBranch        *b_nEgamma;   //!
   TBranch        *b_egamma_hwPt;   //!
   TBranch        *b_egamma_hwEta;   //!
   TBranch        *b_egamma_hwPhi;   //!
   TBranch        *b_egamma_hwQual;   //!
   TBranch        *b_egamma_hwIso;   //!
   TBranch        *b_egamma_bx;   //!
   TBranch        *b_egamma_pt;   //!
   TBranch        *b_egamma_eta;   //!
   TBranch        *b_egamma_phi;   //!
   TBranch        *b_nEtsum;   //!
   TBranch        *b_etsum_hwPt;   //!
   TBranch        *b_etsum_hwEta;   //!
   TBranch        *b_etsum_hwPhi;   //!
   TBranch        *b_etsum_hwQual;   //!
   TBranch        *b_etsum_hwIso;   //!
   TBranch        *b_etsum_type;   //!
   TBranch        *b_etsum_bx;   //!
   TBranch        *b_etsum_pt;   //!
   TBranch        *b_etsum_eta;   //!
   TBranch        *b_etsum_phi;   //!
   TBranch        *b_nHfring;   //!
   TBranch        *b_hfring_hwPt;   //!
   TBranch        *b_hfring_hwEta;   //!
   TBranch        *b_hfring_hwPhi;   //!
   TBranch        *b_hfring_hwQual;   //!
   TBranch        *b_hfring_hwIso;   //!
   TBranch        *b_hfring_bx;   //!
   TBranch        *b_hfring_pt;   //!
   TBranch        *b_hfring_eta;   //!
   TBranch        *b_hfring_phi;   //!
   TBranch        *b_nHfbits;   //!
   TBranch        *b_hfbits_hwPt;   //!
   TBranch        *b_hfbits_hwEta;   //!
   TBranch        *b_hfbits_hwPhi;   //!
   TBranch        *b_hfbits_hwQual;   //!
   TBranch        *b_hfbits_hwIso;   //!
   TBranch        *b_hfbits_bx;   //!
   TBranch        *b_hfbits_pt;   //!
   TBranch        *b_hfbits_eta;   //!
   TBranch        *b_hfbits_phi;   //!

   L1UpgradeTree(string filename, TTree *tree=0);
   virtual ~L1UpgradeTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(int n = 10);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef L1UpgradeTree_cxx
L1UpgradeTree::L1UpgradeTree(string filename, TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      // TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("L1EmulatorPP_v1.root");
      TFile *f = TFile::Open(filename.data());
      // TDirectory * dir = (TDirectory*)f->Get("L1EmulatorPP_v1.root:/EmulatorResults");
      TDirectory * dir = (TDirectory*)f->Get("EmulatorResults");
      dir->GetObject("L1UpgradeTree",tree);

   }
   Init(tree);
}

L1UpgradeTree::~L1UpgradeTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t L1UpgradeTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t L1UpgradeTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void L1UpgradeTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jet_hwPt = 0;
   jet_hwEta = 0;
   jet_hwPhi = 0;
   jet_hwQual = 0;
   jet_hwIso = 0;
   jet_bx = 0;
   jet_pt = 0;
   jet_eta = 0;
   jet_phi = 0;
   tau_hwPt = 0;
   tau_hwEta = 0;
   tau_hwPhi = 0;
   tau_hwQual = 0;
   tau_hwIso = 0;
   tau_bx = 0;
   tau_pt = 0;
   tau_eta = 0;
   tau_phi = 0;
   isotau_hwPt = 0;
   isotau_hwEta = 0;
   isotau_hwPhi = 0;
   isotau_hwQual = 0;
   isotau_hwIso = 0;
   isotau_bx = 0;
   isotau_pt = 0;
   isotau_eta = 0;
   isotau_phi = 0;
   egamma_hwPt = 0;
   egamma_hwEta = 0;
   egamma_hwPhi = 0;
   egamma_hwQual = 0;
   egamma_hwIso = 0;
   egamma_bx = 0;
   egamma_pt = 0;
   egamma_eta = 0;
   egamma_phi = 0;
   etsum_hwPt = 0;
   etsum_hwEta = 0;
   etsum_hwPhi = 0;
   etsum_hwQual = 0;
   etsum_hwIso = 0;
   etsum_type = 0;
   etsum_bx = 0;
   etsum_pt = 0;
   etsum_eta = 0;
   etsum_phi = 0;
   hfring_hwPt = 0;
   hfring_hwEta = 0;
   hfring_hwPhi = 0;
   hfring_hwQual = 0;
   hfring_hwIso = 0;
   hfring_bx = 0;
   hfring_pt = 0;
   hfring_eta = 0;
   hfring_phi = 0;
   hfbits_hwPt = 0;
   hfbits_hwEta = 0;
   hfbits_hwPhi = 0;
   hfbits_hwQual = 0;
   hfbits_hwIso = 0;
   hfbits_bx = 0;
   hfbits_pt = 0;
   hfbits_eta = 0;
   hfbits_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("jet_hwPt", &jet_hwPt, &b_jet_hwPt);
   fChain->SetBranchAddress("jet_hwEta", &jet_hwEta, &b_jet_hwEta);
   fChain->SetBranchAddress("jet_hwPhi", &jet_hwPhi, &b_jet_hwPhi);
   fChain->SetBranchAddress("jet_hwQual", &jet_hwQual, &b_jet_hwQual);
   fChain->SetBranchAddress("jet_hwIso", &jet_hwIso, &b_jet_hwIso);
   fChain->SetBranchAddress("jet_bx", &jet_bx, &b_jet_bx);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
   fChain->SetBranchAddress("tau_hwPt", &tau_hwPt, &b_tau_hwPt);
   fChain->SetBranchAddress("tau_hwEta", &tau_hwEta, &b_tau_hwEta);
   fChain->SetBranchAddress("tau_hwPhi", &tau_hwPhi, &b_tau_hwPhi);
   fChain->SetBranchAddress("tau_hwQual", &tau_hwQual, &b_tau_hwQual);
   fChain->SetBranchAddress("tau_hwIso", &tau_hwIso, &b_tau_hwIso);
   fChain->SetBranchAddress("tau_bx", &tau_bx, &b_tau_bx);
   fChain->SetBranchAddress("tau_pt", &tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_eta", &tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", &tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("nIsotau", &nIsotau, &b_nIsotau);
   fChain->SetBranchAddress("isotau_hwPt", &isotau_hwPt, &b_isotau_hwPt);
   fChain->SetBranchAddress("isotau_hwEta", &isotau_hwEta, &b_isotau_hwEta);
   fChain->SetBranchAddress("isotau_hwPhi", &isotau_hwPhi, &b_isotau_hwPhi);
   fChain->SetBranchAddress("isotau_hwQual", &isotau_hwQual, &b_isotau_hwQual);
   fChain->SetBranchAddress("isotau_hwIso", &isotau_hwIso, &b_isotau_hwIso);
   fChain->SetBranchAddress("isotau_bx", &isotau_bx, &b_isotau_bx);
   fChain->SetBranchAddress("isotau_pt", &isotau_pt, &b_isotau_pt);
   fChain->SetBranchAddress("isotau_eta", &isotau_eta, &b_isotau_eta);
   fChain->SetBranchAddress("isotau_phi", &isotau_phi, &b_isotau_phi);
   fChain->SetBranchAddress("nEgamma", &nEgamma, &b_nEgamma);
   fChain->SetBranchAddress("egamma_hwPt", &egamma_hwPt, &b_egamma_hwPt);
   fChain->SetBranchAddress("egamma_hwEta", &egamma_hwEta, &b_egamma_hwEta);
   fChain->SetBranchAddress("egamma_hwPhi", &egamma_hwPhi, &b_egamma_hwPhi);
   fChain->SetBranchAddress("egamma_hwQual", &egamma_hwQual, &b_egamma_hwQual);
   fChain->SetBranchAddress("egamma_hwIso", &egamma_hwIso, &b_egamma_hwIso);
   fChain->SetBranchAddress("egamma_bx", &egamma_bx, &b_egamma_bx);
   fChain->SetBranchAddress("egamma_pt", &egamma_pt, &b_egamma_pt);
   fChain->SetBranchAddress("egamma_eta", &egamma_eta, &b_egamma_eta);
   fChain->SetBranchAddress("egamma_phi", &egamma_phi, &b_egamma_phi);
   fChain->SetBranchAddress("nEtsum", &nEtsum, &b_nEtsum);
   fChain->SetBranchAddress("etsum_hwPt", &etsum_hwPt, &b_etsum_hwPt);
   fChain->SetBranchAddress("etsum_hwEta", &etsum_hwEta, &b_etsum_hwEta);
   fChain->SetBranchAddress("etsum_hwPhi", &etsum_hwPhi, &b_etsum_hwPhi);
   fChain->SetBranchAddress("etsum_hwQual", &etsum_hwQual, &b_etsum_hwQual);
   fChain->SetBranchAddress("etsum_hwIso", &etsum_hwIso, &b_etsum_hwIso);
   fChain->SetBranchAddress("etsum_type", &etsum_type, &b_etsum_type);
   fChain->SetBranchAddress("etsum_bx", &etsum_bx, &b_etsum_bx);
   fChain->SetBranchAddress("etsum_pt", &etsum_pt, &b_etsum_pt);
   fChain->SetBranchAddress("etsum_eta", &etsum_eta, &b_etsum_eta);
   fChain->SetBranchAddress("etsum_phi", &etsum_phi, &b_etsum_phi);
   fChain->SetBranchAddress("nHfring", &nHfring, &b_nHfring);
   fChain->SetBranchAddress("hfring_hwPt", &hfring_hwPt, &b_hfring_hwPt);
   fChain->SetBranchAddress("hfring_hwEta", &hfring_hwEta, &b_hfring_hwEta);
   fChain->SetBranchAddress("hfring_hwPhi", &hfring_hwPhi, &b_hfring_hwPhi);
   fChain->SetBranchAddress("hfring_hwQual", &hfring_hwQual, &b_hfring_hwQual);
   fChain->SetBranchAddress("hfring_hwIso", &hfring_hwIso, &b_hfring_hwIso);
   fChain->SetBranchAddress("hfring_bx", &hfring_bx, &b_hfring_bx);
   fChain->SetBranchAddress("hfring_pt", &hfring_pt, &b_hfring_pt);
   fChain->SetBranchAddress("hfring_eta", &hfring_eta, &b_hfring_eta);
   fChain->SetBranchAddress("hfring_phi", &hfring_phi, &b_hfring_phi);
   fChain->SetBranchAddress("nHfbits", &nHfbits, &b_nHfbits);
   fChain->SetBranchAddress("hfbits_hwPt", &hfbits_hwPt, &b_hfbits_hwPt);
   fChain->SetBranchAddress("hfbits_hwEta", &hfbits_hwEta, &b_hfbits_hwEta);
   fChain->SetBranchAddress("hfbits_hwPhi", &hfbits_hwPhi, &b_hfbits_hwPhi);
   fChain->SetBranchAddress("hfbits_hwQual", &hfbits_hwQual, &b_hfbits_hwQual);
   fChain->SetBranchAddress("hfbits_hwIso", &hfbits_hwIso, &b_hfbits_hwIso);
   fChain->SetBranchAddress("hfbits_bx", &hfbits_bx, &b_hfbits_bx);
   fChain->SetBranchAddress("hfbits_pt", &hfbits_pt, &b_hfbits_pt);
   fChain->SetBranchAddress("hfbits_eta", &hfbits_eta, &b_hfbits_eta);
   fChain->SetBranchAddress("hfbits_phi", &hfbits_phi, &b_hfbits_phi);
   Notify();
}

Bool_t L1UpgradeTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void L1UpgradeTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t L1UpgradeTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef L1UpgradeTree_cxx
