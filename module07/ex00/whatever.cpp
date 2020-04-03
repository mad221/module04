template <typename T> const T &max(const T &A, const T &B)
{
    if (A > B)
        return (A);
    return (B);
}

template <typename T> const T &min(const T &A, const T &B)
{
    if( A > B)
        return (B);
    return (A);
}

template <typename T> void swap(T &A, T &B)
{
    T C = A;

    A = B;
    B = C;
}