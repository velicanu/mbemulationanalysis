# mbemulationanalysis

open root
```bash
.L L1UpgradeTree.C+
L1UpgradeTree * t = new L1UpgradeTree("starlightunpack_4455.root")
t->Loop()
t->GetEntries()
```

This will print out the number of times each bit fired in all events and dividing that by the total number of events gives the accept rate.


