class Polygon {
public:
    Polygon(int n, float radius);
    Polygon(const Polygon&);
    float computePerimeter();
    void setNbSides(int n);
    void setRadius(float r);
protected:
    int *m_nbSides;
    float *m_radius;
};

class Pentagon : public Polygon {
public:
    Pentagon(float radius);
};

class Hexagon : public Polygon {
public:
    Hexagon(float radius);
    // 6*radius is easier than generic case
    float computePerimeter();
};
