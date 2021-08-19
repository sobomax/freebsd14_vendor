dnl $FreeBSD: 735d1cf1bd2489d572785a0c03587a43342608e6 $
patsubst(`string with a + to replace with a minus', `+', `minus')
patsubst(`string with aaaaa to replace with a b', `a+', `b')
patsubst(`+string with a starting + to replace with a minus', `^+', `minus')
