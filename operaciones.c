#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const a, const b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const a, const b) {
    return a - b;
}

/* Multiplica dos enteros usando el operador * */
/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

nt esPar(int n) {
<<<<<<< HEAD
    return (n % 2) == 0; /* version main actualizada */
=======
    return (n & 1) == 0;
>>>>>>> origin/feature/conflicto-demo
}
