#include <glib.h>
#include "test_example.c"

#include <glib.h>

static void
simple_test_case (void)
{
/* a suitable test */
// g_assert (sum (1000) == 233168);

/* a test with verbose error message */
g_assert_cmpint (sum (1000), ==, 499500);
}

int
main (int argc, char **argv)
{
/* initialize test program */
g_test_init (&argc, &argv, NULL);

/* hook up your test functions */
g_test_add_func ("/Simple Test Case", simple_test_case);

/* run tests from the suite */
return g_test_run ();
}