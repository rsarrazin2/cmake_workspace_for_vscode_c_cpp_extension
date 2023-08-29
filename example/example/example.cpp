constexpr float operator"" _testf(const long double value) { return float{static_cast<float>(value)}; }

constexpr double operator"" _testd(const long double value) { return double{static_cast<double>(value)}; }

static constexpr auto kTestF0{0.0_testf};
static constexpr auto kTestF1{1.0_testf};
static constexpr auto kTestF2{2.0_testf};

static constexpr auto kTestD0{0.0_testd};
static constexpr auto kTestD1{1.0_testd};
static constexpr auto kTestD2{2.0_testd};

int main()
{
    (void)kTestF0;
    (void)kTestF1;
    (void)kTestF2;

    (void)kTestD0;
    (void)kTestD1;
    (void)kTestD2;

    return -1;
}