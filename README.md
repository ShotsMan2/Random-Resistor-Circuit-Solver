# Random Resistor Circuit Solver

This project implements a circuit simulation tool in C that randomly connects resistors in Series or Parallel configurations to find the equivalent resistance.

## ⚙️ Logic: Recursive Tree

The algorithm uses a **Divide and Conquer** approach:
1.  **Split:** Randomly divides the list of resistors into two groups.
2.  **Recurse:** Calculates the equivalent resistance for each subgroup.
3.  **Connect:** Randomly decides how to connect the two subgroups:
    * **Series:** $R_{eq} = R_1 + R_2$
    * **Parallel:** $R_{eq} = \frac{R_1 \cdot R_2}{R_1 + R_2}$

## 🚀 Example Output

**Input:** 3 Resistors (`R1=10`, `R2=20`, `R3=30`)

**Process:**
1.  Algorithm splits `R1` vs `(R2, R3)`.
2.  Subgroup `(R2, R3)` connected in **Series**: $20 + 30 = 50\Omega$.
3.  Main group `R1` vs `Subgroup` connected in **Parallel**: $10 || 50$.
    * Calculation: $(10 \times 50) / (10 + 50) = 500 / 60 \approx 8.33\Omega$.

```text
--- Rastgele Direnc Degerleri ---
R1: 10.00 Ohm
R2: 20.00 Ohm
R3: 30.00 Ohm
---------------------------------

   [Grup 20.00] + [Grup 30.00] --> SERI baglandi.
   [Grup 10.00] || [Grup 50.00] --> PARALEL baglandi.

=================================
Sonuc Esdeger Direnc (R_es): 8.3333 Ohm
=================================
