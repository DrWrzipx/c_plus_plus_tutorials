double add(double x, double y)
{
    double result = x + y;
    return result;
}

double add(double x, double y, double z)
{
    double result = x + y + z;
    return result;
    // return add(add(x,y) z);
}

void nothingReturn(void)
{
    std::cout << "This is function only for print SOMETHING on screen." << std::endl;
}