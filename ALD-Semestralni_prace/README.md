# NTI/ALD2022 - Semestrální práce
## Zadání

Zadáním úlohy bylo vytvořit program, generující mapu z předem definovaných stavebních prvků. 
Mapa musí být generována tak, aby na sebe jednotlivé prvky smyslupně navazovali.

## Algoritmus generování
1. Do funkce **template()** jsou zadány rozměry výsledné matice.
2. Nejdříve je náhodně zvolena hodnota na pozici [1,1], v rozmezí 0 až 15.
3. Další hodnoty v prvním řádku jsou náhodně vybírány z vektoru validních hodnot.
4. Tento vektor získáme pomocí funkce **rightOpt()**. Dosazením předchozí hodnoty získáme vektor, který obsahuje všechny možné sousední hodnoty napravo od hodnoty předchozí.
5. Na dalších řádcích je kromě **rightOpt()** používána také funkce **downOpt()**. Ta generuje vektor validních hodnot podle přechozí horní hodnoty.
6. Kromě prvního sloupce, kde je využívána jen funkce **downOpt()**, je zbytek hodnot generován z průniku vektorů obou funkcí.
7. Výsledná matice je předána do funkce **Bitmapovator()**, kde jsou čísla převedena na stavební prvky, z kterých je vytvořen obrázek.

## Ovládání
* `Výška` a `Šířka` - vstupy určující velikost generovaného obrázku, validními vstupy jsou čísla > 0
* `GENERUJ` - tlačítko pro načtení vstupů, spuštění výpočtů a vykreslování
* `KONEC` - tlačítko vypíná program

## Funkce souborů
* `main.m` - generování uživatelského prostředí
* `getPartG.m` - generování a získávání stavebních prvků
* `Bitmapovator.m` - převod hodnot na stavební prvky
* `template.m` - vytváření validní matice hodnot
* `rightOpt.m` - získávání vektoru validních hodnot, které mohou napravo sousedit se zadanou hodnotou
* `downOpt.m` - získávání vektoru validních hodnot, které mohou být pod zadanou hodnotou.

### Použíté toolboxy
* *Image Processing Toolbox*
