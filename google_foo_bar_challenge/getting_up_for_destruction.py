from fractions import Fraction  

def solution(pegs):
    arrlen = len(pegs)
    if ((not pegs) or arrlen == 1):
        return [-1,-1]

    even = True if (arrlen % 2 == 0) else False
    sum = (- pegs[0] + pegs[arrlen - 1]) if even else (- pegs[0] - pegs[arrlen -1])

    if (arrlen > 2):
        for index in xrange(1, arrlen-1):
            sum += 2 * (-1)**(index+1) * pegs[index]

    FirstGearRadius = Fraction(2 * (float(sum)/3 if even else sum)).limit_denominator()


    curradius = FirstGearRadius
    for index in xrange(0, arrlen-2):
        cenDistance = pegs[index+1] - pegs[index]
        radiusNext = cenDistance - curradius
        if (curradius < 1 or radiusNext < 1):
            return [-1,-1]
        else:
            curradius = radiusNext

    return [FirstGearRadius.numerator, FirstGearRadius.denominator]