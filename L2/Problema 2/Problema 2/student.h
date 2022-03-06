#pragma once

class Student {
  private:
    char name[200];
    float math;
    float english;
    float history;

  public:
    void init();
    void set_name(const char* name);
    void set_the_grade_for_mathematics(float math);
    void set_the_grade_for_english(float english);
    void set_the_grade_for_history(float history);
    const char* get_name() const;
    float get_the_grade_for_mathematics() const;
    float get_the_grade_for_english() const;
    float get_the_grade_for_history() const;
    float get_the_average_grade() const;
};
