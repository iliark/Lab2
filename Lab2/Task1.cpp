bool isInArea(double x, double y)
{
    if (x * x + y * y <= 1 && x * y <= 0)
        return 1;
    else
        return 0;
}