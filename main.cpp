
#include <fmt/color.h>
#include <fmt/format.h>
#include <string>
#include <iostream>

int main() {

    fmt::print("This is a simple demo of libfmt\n");
    fmt::print(fmt::emphasis::bold | fg(fmt::color::red),
               "This text should be bold and red\n");
    fmt::print(fmt::emphasis::italic | fg(fmt::color::pale_turquoise) |
                   bg(fmt::color::sandy_brown),
               "While should be italic on a sandy brown background with pale turquoise text");
    fmt::print("\n"); // to not have formatting carry over

    u_int32_t i = 0x57;
    fmt::print("Here is a number in hex: {:#x} and dec: {} and octal: {:o}\n", i, i, i);
    fmt::print("We can also look at it in binary: {:#b}\n", i);

    const char* text = "random";
    double d = 1./3.;
    std::string s = fmt::format("Some {} text and a value of {:.3} formatted into a string", text, d);
    std::cout << s << std::endl;


    std::string ct = "compile time";
    double d2 = 5.3652147886254455;
    fmt::print(FMT_STRING("Format can be checked at {:s} like for this double {:.5f} using the FMT_STRING macro\n"), ct, d2);

    fmt::print(fmt::emphasis::italic  | fmt::emphasis::bold| fg(fmt::color::pale_golden_rod) |
                   bg(fmt::color::rosy_brown),"Bye!\n");
}