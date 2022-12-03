# Vlákna
V tomto kódu využíváme vláken pro postupný výpis textu na displej.
Běh jednotlivých vláken jsou na sebe navázána ve funkci `main2` funkcí  _join_.

Ve funkci `main`  předcházíme vzniku souběhu pomocí zamykání a odemykání. To je zajištěno třídou _mutex_.

## Popis kódu
- `struct vars` je struktura pro definici vykreslovaných hodnot.
- `void threading(struct vars)` je funkce pro vykreslování a přepisování textu.
- `void thr()` vykreslování na displeji.
- `void thr2()` vykreslování na displeji.
- `void main()` implemenatce úloh 2 a 2b.
- `void main2()` implemenatce úloh 2a.
