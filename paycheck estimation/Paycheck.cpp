#include <iostream>
#include "Paycheck.h"

Paycheck::Paycheck(double hourly_rate)
{
    this->hourly_rate = hourly_rate;
    this->overtime_rate = (this->hourly_rate * 1.50);
    this->regular_hours = 80; // initialized to expected hours worked every 2 weeks
    this->overtime_hours = 0; // initialized to expected overtime hours
    calc_paycheck_before_taxes();
    calc_paycheck_after_taxes();
}

Paycheck::~Paycheck(){};

// setters
void Paycheck::set_regular_hours(int regular_hours)
{
    this->regular_hours = regular_hours;
}

void Paycheck::set_overtime_hours(int overtime_hours)
{
    this->overtime_hours = overtime_hours;
}

// getters
double Paycheck::get_hourly_rate()
{
    return hourly_rate;
}

double Paycheck::get_overtime_rate()
{
    return overtime_rate;
}

int Paycheck::get_regulars_hours()
{
    return regular_hours;
}

int Paycheck::get_overtime_hours()
{
    return overtime_hours;
}

double Paycheck::get_paycheck_before_taxes()
{
    return paycheck_before_taxes;
}

double Paycheck::get_paycheck_after_taxes()
{
    return paycheck_after_taxes;
}

double Paycheck::get_deducted_in_taxes()
{
    return deducted_in_taxes;
}

double Paycheck::projected_yearly_income()
{
    return paycheck_before_taxes * 26.00;
}

double Paycheck::projected_end_of_year_tax_deductions()
{
    return deducted_in_taxes * 26.00;
}

double Paycheck::get_fed_tax_rate()
{
    return fed_tax_rate;
}

double Paycheck::get_social_security_tax_rate()
{
    return social_security_tax_rate;
}

double Paycheck::get_ca_tax_rate()
{
    return ca_tax_rate;
}

double Paycheck::get_state_disability_tax_rate()
{
    return state_disability_tax_rate;
}

// functions

double Paycheck::sum_of_taxes()
{
    return fed_tax_rate + ca_tax_rate + social_security_tax_rate + medicare_tax_rate + state_disability_tax_rate;
}

void Paycheck::calc_paycheck_before_taxes()
{
    if (regular_hours > 0)
        paycheck_before_taxes = (regular_hours * hourly_rate) + (overtime_hours * overtime_rate);
    else
    {
        paycheck_before_taxes = 0.0;
    }
}

void Paycheck::calc_paycheck_after_taxes()
{
    deducted_in_taxes = paycheck_before_taxes * -sum_of_taxes();
    paycheck_after_taxes = paycheck_before_taxes + deducted_in_taxes;
}

void Paycheck::paycheck_statement()
{
    std::cout << "Paycheck before taxes: \t\t\t\t$" << paycheck_before_taxes << std::endl;
    std::cout << "Paycheck after taxes: \t\t\t\t$" << paycheck_after_taxes << std::endl;
    std::cout << "Projected Yearly Income: \t\t\t$" << projected_yearly_income() << std::endl;
    std::cout << "Projected End of Year deducted in taxes:\t$" << projected_end_of_year_tax_deductions() << std::endl;
    std::cout << std::endl;
    std::cout << "Hourly rate:\t\t\t$" << hourly_rate << std::endl;
    std::cout << "Overtime rate:\t\t\t$" << overtime_rate << std::endl;
    std::cout << "Deducted From Taxes: \t\t$" << deducted_in_taxes << std::endl;
    std::cout << "Total Regular Hours Worked:\t" << regular_hours << std::endl;
    std::cout << "Total Overtime Hours Worked:\t" << overtime_hours << std::endl;
}