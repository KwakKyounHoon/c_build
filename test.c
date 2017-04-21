#include <glib.h>
#include "whattotest2.c"

static void
simple_test_case (void)
{
/* a suitable test */
g_assert (ggob(2) == 4);

/* a test with verbose error message */
g_assert_cmpint (ggob (2), ==, 4);
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