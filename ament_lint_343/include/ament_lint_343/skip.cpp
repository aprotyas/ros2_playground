// No copyright header

#pragma once

void this_is_a_very_long_function_name_that_will_trigger_a_linter_warning_from_uncrustify(int argument_to_make_signature_long_enough)
{
  (argument_to_make_signature_long_enough);
}

void cppcheck_error()
{
  bool y = true;
  int x = y & 0xF;
  int buf[10];
  buf[11] = 0; // <- ERROR
}

int main() {
  cppcheck_error();
}
