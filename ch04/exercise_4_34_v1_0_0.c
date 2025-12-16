/**
 * File: exercise_4_34_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ Describe how you’d replace a do…while loop with an equivalent while. What problem
 *                occurs when you try to replace a while loop with an equivalent do…while loop?
 *                Suppose you’ve been told that you must remove a while loop and replace it with a
 *                do…while. What additional control statement would you need to use? How would you
 *                use it to ensure that the resulting program behaves exactly like the original?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 16-12-2025
 */

#include <stdio.h>

int main(void) {
    /*
     * do…while → while (two standard ways)
     *
     * 1) Use an infinite while with a break on the negated condition.
     *
     *    do {
     *        S;         // loop body (task)
     *    } while (cond);
     *
     *    // equivalent:
     *    while (1) {
     *        S;
     *        if (!cond) {
     *            break;
     *        }
     *    }
     *
     * 2) Hoist one execution of the body, then use a while.
     *    (This duplicates S textually, so #1 is usually safer for refactors.)
     *
     *    do {
     *        S;
     *    } while (cond);
     *
     *    // equivalent:
     *    S;
     *    while (cond) {
     *        S;
     *    }
     *
     * while → do…while (the problem and the fix)
     *
     *    while (cond) {
     *        S;
     *    }
     *
     * Problem: A do…while executes S at least once even when cond is false
     * initially; a while may execute S zero times. So a naive replacement:
     *
     *    do {
     *        S;
     *    } while (cond);
     *
     * is not equivalent when cond is initially false.
     *
     * Required additional control statement: if
     *
     *    // exact behavioral match using a pre-check:
     *    if (cond) {
     *        do {
     *            S;
     *        } while (cond);
     *    }
     *
     * This preserves the “zero-or-more” iterations semantics of while by
     * guarding the do…while with an if on the same condition.
     */

    // ───────────────────────── examples ─────────────────────────
    // the small examples below print a simple body (S) that
    // increments i while `i < limit` to illustrate the patterns

    int i, limit;

    puts("do…while → while (limit = 3)");
    // original do…while
    i = 0; limit = 3;
    puts("- do…while (original)");
    do {
        printf("  S: i=%d\n", i);
        ++i;
    } while (i < limit);

    // equivalent while #1: infinite loop + break on negated condition
    i = 0; limit = 3;
    puts("- while + break (equivalent)");
    while (1) {
        printf("  S: i=%d\n", i);
        ++i;
        if (!(i < limit)) {
            break;
        }
    }

    // Equivalent while #2: hoist one S, then while(cond)
    i = 0; limit = 3;
    puts("- hoisted S + while(cond) (equivalent)");
    printf("  S: i=%d\n", i);
    ++i;
    while (i < limit) {
        printf("  S: i=%d\n", i);
        ++i;
    }

    puts("");

    puts("while → do…while (demonstrating the guard)\n(limit = 0 to show zero-iteration case)");
    // original while: zero iterations when limit == 0
    i = 0; limit = 0;
    puts("- while (original): expects no output");
    while (i < limit) {
        printf("  S: i=%d\n", i);
        ++i;
    }

    // naive do…while replacement: NOT equivalent (prints once)
    i = 0; limit = 0;
    puts("- do…while (naive): not equivalent; prints once");
    do {
        printf("  S: i=%d\n", i);
        ++i;
    } while (i < limit);

    // correct do…while with guard: equivalent to original while
    i = 0; limit = 0;
    puts("- if (cond) do…while (guarded): equivalent; prints nothing");
    if (i < limit) {
        do {
            printf("  S: i=%d\n", i);
            ++i;
        } while (i < limit);
    }
    // ────────────────────────────────────────────────────────────

    return 0;
}