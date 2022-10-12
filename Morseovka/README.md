# Morseovka
Tento kód načte zadaný String a pomocí diody jednotlivá písmena vybliká v Morseově abecedě.

1. Je načteno slovo, které chceme převést.
2. V podprogramu je rozděleno na jednotlivá písmena pomocí funkce Word().
3. Funkcí Letter() jsou písmenu přiřazeny předem definované příkazy pro převod do Morseovky.
4. Atributy znaku (typ, délka) jsou definovány funkcí Symbol().
5. Dioda bliká podle příkazů, dokud nejsou takto zobrazeny všechny písmeny slova.
6. Poté nadejte pauza, po které je slovo vyblikáno znovu.

* `morse.cpp` - Podprogram pro rozkouskování slova na písmena a navrácení příkazů pro zobrazení písmen ve formě Morseovy abacedy.
*  `morse.h` - Hlavičkový soubor definující tvar a atributy funkcí.
*  `main.cpp` - Hlavní část struktury, kde zádáváme slovo, které chceme převést.
