      SUBROUTINE IDCMP(ID,IDX,N,II)
      DIMENSION ID(N),IDX(N)
      II=0
      DO 10 I=1,N
      IF(ID(I).NE.IDX(I))THEN
      II=I
      RETURN
      ENDIF
   10 CONTINUE
      RETURN
      END SUBROUTINE IDCMP

