{
  hltanalysis->cd();
  HltTree->Draw("L1_MinimumBiasHF1_AND>>h(2,-0.5,1.5)");
  h->Integral();
  h->GetBinContent(2);
  HltTree->Draw("L1_MinimumBiasHF1_OR>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_MinimumBiasHF2_AND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_MinimumBiasHF2_OR>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_SingleEG2_BptxAND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_SingleEG5_BptxAND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_DoubleEG5_BptxAND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_DoubleEG5_BptxAND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_EG2_NotMinimumBiasHF2_AND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_DoubleEG2_NotMinimumBiasHF2_AND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
  HltTree->Draw("L1_EG5_NotMinimumBiasHF2_AND>>h(2,-0.5,1.5)");
  h->GetBinContent(2);
}