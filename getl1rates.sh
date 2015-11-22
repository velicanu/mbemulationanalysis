#!/bin/bash
if [ $# -ne 2 ]
then
  echo "Usage: ./getl1rates.sh <rootfile> <output>"
  exit 1
fi

root -b <<EOF
TFile *_file1 = TFile::Open("$1");
hltbitanalysis->cd();
TTreePlayer * player = (TTreePlayer*)HltTree->GetPlayer()
player->SetScanRedirect(true);
player->SetScanFileName("tmp.txt");
HltTree->Scan("Run","","",1);
.q
EOF
run=`grep 0 tmp.txt | awk '{print $4}'`
sed "s@_FILEFLAG_@$1@g" rootcommands_getl1rates.C > tmp.C
echo "run,$run" > $2
root -b -q tmp.C > raw.txt

total=`grep total raw.txt | awk -F ',' '{print $2}'`

for i in ` cat raw.txt | tail -n12`
do
  hits=`echo $i | awk -F ',' '{print $2}'`
  fraction=`perl -e "print $hits/$total"`
  echo "$i,$fraction" >> $2
done

