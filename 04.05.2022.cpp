int max = null;

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            max = array[i];
            continue;
        }
        if (mass[i] > max)
        {
            max = array[i];
        }
        if (i < count)
        {
            continue;
        }
    }
    return max;
