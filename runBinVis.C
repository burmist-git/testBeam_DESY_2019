{
  gROOT->LoadMacro("visBin.C");
  gROOT->LoadMacro("./wfSimulation/src/waveformSimple.cpp");
  //visBin t("../root_data/Run_1_Data_9_15_2016_Binary/Run_1_Data_9_15_2016_Binary.bin.root");
  //visBin t("../root_data/Run_2_Data_11_17_2016_Binary/Run_2_Data_11_17_2016_Binary.bin.root");
  //visBin t("../root_data/Run_5_Data_11_17_2016_Binary/Run_5_Data_11_17_2016_Binary.bin.root");
  visBin t("../root_data/Run_006_Data_12_4_2019_Binary/Run_006_Data_12_4_2019_Binary.bin.root");
  //visBin t("../root_data/Run_001_Data_11_23_2019_Binary/Run_001_Data_11_23_2019_Binary.bin.root");
  //visBin t("../root_data/Run_001_Data_12_3_2019_Binary/Run_001_Data_12_3_2019_Binary.bin.root");
  //visBin t("../root_data/Run_012_Data_12_4_2019_Binary/Run_012_Data_12_4_2019_Binary.bin.root");

  //visBin t("../root_data/Run_006_Data_12_4_2019_Binary/Run_006_Data_12_4_2019_Binary.bin.root");

  

  Int_t evID;
  Int_t chID;
  TString key_lineOn;
  TString key_printInfoTrue;
  TString fileAnaSetups;
  evID = 2;
  chID = 0;
  key_lineOn = "yes";
  key_printInfoTrue = "printInfoTrue";
  //t.DrawOneChannel(evID, chID);
  fileAnaSetups = "anaSetup.dat";
  t.DrawOneChannel_waveformSimple(evID, chID, key_lineOn, key_printInfoTrue,fileAnaSetups);
  //t.Loop();
}
