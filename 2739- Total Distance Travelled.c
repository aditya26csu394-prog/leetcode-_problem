int distanceTraveled(int mainTank, int additionalTank) {
    
    int transfers;

    if ((mainTank - 1) / 4 < additionalTank)
        transfers = (mainTank - 1) / 4;
    else
        transfers = additionalTank;

    return (mainTank + transfers) * 10;
}
