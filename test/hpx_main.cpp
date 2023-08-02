#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>

#include <hpx/hpx_main.hpp>

// Macro for enabling TESTs running
#define TEST true

int runCatchTests()
{
    return Catch::Session().run();
}
 
int main()
{
    //If the TEST macro is defined to be true,
    //runCatchTests will be called and immediately
    //return causing the program to terminate.
    if (TEST)
    {
        return runCatchTests();
    }
 
    return 0;
}