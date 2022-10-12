# Displej
Tento kód načte zadaný String a vypíše ho na displej desky.

1. Nejdříve definujeme základní atributy jako vrstvu, na které budeme pracovat,font, barvu písma a barvu základny.
2. Pomocí BSP_LCD_DisplayStringAt(...) určíme souřadnice textu, zarovnání a samotný text, který chceme vypsat.
3. Nakonec spustíme delay 2000 ms, aby text neblikal a text znovu vypisujeme v nekonečné smyčce.
