{
  TFile * _file0 = TFile::Open("_FILEFLAG_");
  TTree * HltTree = (TTree*) _file0->Get("hltbitanalysis/HltTree");
  TH1D * h = new TH1D("h","",2,-0.5,1.5);
  HltTree->Draw("L1_MinimumBiasHF1_AND>>h");
  std::cout<<"total,"<<h->Integral()<<std::endl;
  std::cout<<"L1_MinimumBiasHF1_AND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_MinimumBiasHF1_OR>>h");
  std::cout<<"L1_MinimumBiasHF1_OR,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_MinimumBiasHF2_AND>>h");
  std::cout<<"L1_MinimumBiasHF2_AND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_MinimumBiasHF2_OR>>h");
  std::cout<<"L1_MinimumBiasHF2_OR,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_SingleEG2_BptxAND>>h");
  std::cout<<"L1_SingleEG2_BptxAND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_SingleEG5_BptxAND>>h");
  std::cout<<"L1_SingleEG5_BptxAND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_DoubleEG2_BptxAND>>h");
  std::cout<<"L1_DoubleEG2_BptxAND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_DoubleEG5_BptxAND>>h");
  std::cout<<"L1_DoubleEG5_BptxAND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_EG2_NotMinimumBiasHF2_AND>>h");
  std::cout<<"L1_EG2_NotMinimumBiasHF2_AND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_DoubleEG2_NotMinimumBiasHF2_AND>>h");
  std::cout<<"L1_DoubleEG2_NotMinimumBiasHF2_AND,"<<h->GetBinContent(2)<<std::endl;
  HltTree->Draw("L1_EG5_NotMinimumBiasHF2_AND>>h");
  std::cout<<"L1_EG5_NotMinimumBiasHF2_AND,"<<h->GetBinContent(2)<<std::endl;
}
