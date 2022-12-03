# Parkoviště

V této úloze simulujeme pohyb aut na parkovišti. Účelem je vytvořit několik vláken, které odpovídají jednotlivým autům, a vykreslovat je na displej, aniž by docházelo k souběhu.

1. Nejdříve vygenerujeme jednotlivé objekty. To jsou místa, auta, parkoviště a zapouzdření PC, které obsahuje auto a parkoviště.
2. Spustíme jednotlivá vlákna, auta, které se nezávisle na sobě vykonávají.
3. Dále je spustěn semafor, který se stará o přístup k sdíleným datům (místch na parkovišti).
4. Auto zjistí kde je volné místo, zamkne displej, přebarví místo, displej odemkne a čeká předem určenou dobu.
5. Po uplynutí času znovu zamkne displej, přebarví své místo na originální barvu, odemkne displej a nastaví místo na volné.
