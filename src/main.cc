#include <cpprest/json.h>

int main(int argc, char *argv[]) {
    ucout << web::json::value::parse(
                 U("{\"test\":\"\\uff1a\"}"))
                 .at(U("test"))
                 .as_string()
          << std::endl;
}
