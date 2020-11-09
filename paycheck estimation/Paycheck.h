#ifndef _PAYCHECK_H_
#define _PAYCHECK_H_

class Paycheck
{

private:
    //employee hourly rate
    double hourly_rate;
    double overtime_rate;
    int regular_hours;  // <= 40 hours per week
    int overtime_hours; // > 40 hours per week
    double paycheck_before_taxes;
    double paycheck_after_taxes;
    double deducted_in_taxes;

    // federal level
    double fed_tax_rate = 14.29 / 100.00;
    double social_security_tax_rate = 6.20 / 100.00;
    double medicare_tax_rate = 1.45 / 100.00;

    // state level
    double ca_tax_rate = 5.52 / 100.00;
    double state_disability_tax_rate = 1.00 / 100.00;

public:
    // constructor
    Paycheck(double hourly_rate);
    ~Paycheck();

    //setters
    void set_regular_hours(int regular_hours);
    void set_overtime_hours(int overtime_hours);

    // getters
    double get_hourly_rate();
    double get_overtime_rate();

    int get_regulars_hours();
    int get_overtime_hours();

    double get_paycheck_before_taxes();
    double get_paycheck_after_taxes();
    double get_deducted_in_taxes();
    double projected_yearly_income();
    double projected_end_of_year_tax_deductions();

    double get_fed_tax_rate();
    double get_social_security_tax_rate();
    double get_medicare_tax_rate();

    double get_ca_tax_rate();
    double get_state_disability_tax_rate();

    //sum of taxes
    double sum_of_taxes();

    //income before taxes
    void calc_paycheck_before_taxes();

    //income after taxes
    void calc_paycheck_after_taxes();

    //print statement
    void paycheck_statement();
};

#endif