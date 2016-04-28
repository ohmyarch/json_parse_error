#include <cpprest/json.h>

int main(int argc, char *argv[]) {
    ucout << web::json::value::parse(
                 U("{\"test\":\"\\ud83c\\uddee\\ud83c\\udde9\"}"))
                 .at(U("test"))
                 .as_string()
          << std::endl;
}
