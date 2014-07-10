/* Simulation code for SimpleTransformerPinney generated by the OpenModelica Compiler 1.9.0 (r17628). */
#define time data->localData[0]->timeValue

/* States */
#define _$PbasicTransformer$Pi2(i) data->localData[i]->realVars[0]
#define _$P$PRE$PbasicTransformer$Pi2(i) $P$PRE$PbasicTransformer$Pi2
#define $PbasicTransformer$Pi2 _$PbasicTransformer$Pi2(0)
#define $P$PRE$PbasicTransformer$Pi2 data->simulationInfo.realVarsPre[0]
#define $P$ATTRIBUTE$PbasicTransformer$Pi2 data->modelData.realVarsData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$Pi2 $P$ATTRIBUTE$PbasicTransformer$Pi2
#define $PbasicTransformer$Pi2__varInfo data->modelData.realVarsData[0].info
#define $P$PRE$PbasicTransformer$Pi2__varInfo data->modelData.realVarsData[0].info
#define _$PbasicTransformer$Pi1(i) data->localData[i]->realVars[1]
#define _$P$PRE$PbasicTransformer$Pi1(i) $P$PRE$PbasicTransformer$Pi1
#define $PbasicTransformer$Pi1 _$PbasicTransformer$Pi1(0)
#define $P$PRE$PbasicTransformer$Pi1 data->simulationInfo.realVarsPre[1]
#define $P$ATTRIBUTE$PbasicTransformer$Pi1 data->modelData.realVarsData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$Pi1 $P$ATTRIBUTE$PbasicTransformer$Pi1
#define $PbasicTransformer$Pi1__varInfo data->modelData.realVarsData[1].info
#define $P$PRE$PbasicTransformer$Pi1__varInfo data->modelData.realVarsData[1].info

/* StatesDerivatives */
#define _$P$DER$PbasicTransformer$Pi2(i) data->localData[i]->realVars[2]
#define _$P$PRE$P$DER$PbasicTransformer$Pi2(i) $P$PRE$P$DER$PbasicTransformer$Pi2
#define $P$DER$PbasicTransformer$Pi2 _$P$DER$PbasicTransformer$Pi2(0)
#define $P$PRE$P$DER$PbasicTransformer$Pi2 data->simulationInfo.realVarsPre[2]
#define $P$ATTRIBUTE$P$DER$PbasicTransformer$Pi2 data->modelData.realVarsData[2].attribute
#define $P$ATTRIBUTE$P$PRE$P$DER$PbasicTransformer$Pi2 $P$ATTRIBUTE$P$DER$PbasicTransformer$Pi2
#define $P$DER$PbasicTransformer$Pi2__varInfo data->modelData.realVarsData[2].info
#define $P$PRE$P$DER$PbasicTransformer$Pi2__varInfo data->modelData.realVarsData[2].info
#define _$P$DER$PbasicTransformer$Pi1(i) data->localData[i]->realVars[3]
#define _$P$PRE$P$DER$PbasicTransformer$Pi1(i) $P$PRE$P$DER$PbasicTransformer$Pi1
#define $P$DER$PbasicTransformer$Pi1 _$P$DER$PbasicTransformer$Pi1(0)
#define $P$PRE$P$DER$PbasicTransformer$Pi1 data->simulationInfo.realVarsPre[3]
#define $P$ATTRIBUTE$P$DER$PbasicTransformer$Pi1 data->modelData.realVarsData[3].attribute
#define $P$ATTRIBUTE$P$PRE$P$DER$PbasicTransformer$Pi1 $P$ATTRIBUTE$P$DER$PbasicTransformer$Pi1
#define $P$DER$PbasicTransformer$Pi1__varInfo data->modelData.realVarsData[3].info
#define $P$PRE$P$DER$PbasicTransformer$Pi1__varInfo data->modelData.realVarsData[3].info

/* InlineSolver Vars */

/* Algebraic Vars */
#define _$Presistor12$PLossPower(i) data->localData[i]->realVars[4]
#define _$P$PRE$Presistor12$PLossPower(i) $P$PRE$Presistor12$PLossPower
#define $Presistor12$PLossPower _$Presistor12$PLossPower(0)
#define $P$PRE$Presistor12$PLossPower data->simulationInfo.realVarsPre[4]
#define $P$ATTRIBUTE$Presistor12$PLossPower data->modelData.realVarsData[4].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PLossPower $P$ATTRIBUTE$Presistor12$PLossPower
#define $Presistor12$PLossPower__varInfo data->modelData.realVarsData[4].info
#define $P$PRE$Presistor12$PLossPower__varInfo data->modelData.realVarsData[4].info
#define _$Presistor12$Pv(i) data->localData[i]->realVars[5]
#define _$P$PRE$Presistor12$Pv(i) $P$PRE$Presistor12$Pv
#define $Presistor12$Pv _$Presistor12$Pv(0)
#define $P$PRE$Presistor12$Pv data->simulationInfo.realVarsPre[5]
#define $P$ATTRIBUTE$Presistor12$Pv data->modelData.realVarsData[5].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$Pv $P$ATTRIBUTE$Presistor12$Pv
#define $Presistor12$Pv__varInfo data->modelData.realVarsData[5].info
#define $P$PRE$Presistor12$Pv__varInfo data->modelData.realVarsData[5].info
#define _$Pload1$PLossPower(i) data->localData[i]->realVars[6]
#define _$P$PRE$Pload1$PLossPower(i) $P$PRE$Pload1$PLossPower
#define $Pload1$PLossPower _$Pload1$PLossPower(0)
#define $P$PRE$Pload1$PLossPower data->simulationInfo.realVarsPre[6]
#define $P$ATTRIBUTE$Pload1$PLossPower data->modelData.realVarsData[6].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PLossPower $P$ATTRIBUTE$Pload1$PLossPower
#define $Pload1$PLossPower__varInfo data->modelData.realVarsData[6].info
#define $P$PRE$Pload1$PLossPower__varInfo data->modelData.realVarsData[6].info
#define _$Pload1$Pv(i) data->localData[i]->realVars[7]
#define _$P$PRE$Pload1$Pv(i) $P$PRE$Pload1$Pv
#define $Pload1$Pv _$Pload1$Pv(0)
#define $P$PRE$Pload1$Pv data->simulationInfo.realVarsPre[7]
#define $P$ATTRIBUTE$Pload1$Pv data->modelData.realVarsData[7].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$Pv $P$ATTRIBUTE$Pload1$Pv
#define $Pload1$Pv__varInfo data->modelData.realVarsData[7].info
#define $P$PRE$Pload1$Pv__varInfo data->modelData.realVarsData[7].info
#define _$Presistor11$PLossPower(i) data->localData[i]->realVars[8]
#define _$P$PRE$Presistor11$PLossPower(i) $P$PRE$Presistor11$PLossPower
#define $Presistor11$PLossPower _$Presistor11$PLossPower(0)
#define $P$PRE$Presistor11$PLossPower data->simulationInfo.realVarsPre[8]
#define $P$ATTRIBUTE$Presistor11$PLossPower data->modelData.realVarsData[8].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PLossPower $P$ATTRIBUTE$Presistor11$PLossPower
#define $Presistor11$PLossPower__varInfo data->modelData.realVarsData[8].info
#define $P$PRE$Presistor11$PLossPower__varInfo data->modelData.realVarsData[8].info
#define _$Presistor11$Pv(i) data->localData[i]->realVars[9]
#define _$P$PRE$Presistor11$Pv(i) $P$PRE$Presistor11$Pv
#define $Presistor11$Pv _$Presistor11$Pv(0)
#define $P$PRE$Presistor11$Pv data->simulationInfo.realVarsPre[9]
#define $P$ATTRIBUTE$Presistor11$Pv data->modelData.realVarsData[9].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$Pv $P$ATTRIBUTE$Presistor11$Pv
#define $Presistor11$Pv__varInfo data->modelData.realVarsData[9].info
#define $P$PRE$Presistor11$Pv__varInfo data->modelData.realVarsData[9].info
#define _$PsineVoltage1$Pv(i) data->localData[i]->realVars[10]
#define _$P$PRE$PsineVoltage1$Pv(i) $P$PRE$PsineVoltage1$Pv
#define $PsineVoltage1$Pv _$PsineVoltage1$Pv(0)
#define $P$PRE$PsineVoltage1$Pv data->simulationInfo.realVarsPre[10]
#define $P$ATTRIBUTE$PsineVoltage1$Pv data->modelData.realVarsData[10].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$Pv $P$ATTRIBUTE$PsineVoltage1$Pv
#define $PsineVoltage1$Pv__varInfo data->modelData.realVarsData[10].info
#define $P$PRE$PsineVoltage1$Pv__varInfo data->modelData.realVarsData[10].info
#define _$PbasicTransformer$Pdv(i) data->localData[i]->realVars[11]
#define _$P$PRE$PbasicTransformer$Pdv(i) $P$PRE$PbasicTransformer$Pdv
#define $PbasicTransformer$Pdv _$PbasicTransformer$Pdv(0)
#define $P$PRE$PbasicTransformer$Pdv data->simulationInfo.realVarsPre[11]
#define $P$ATTRIBUTE$PbasicTransformer$Pdv data->modelData.realVarsData[11].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$Pdv $P$ATTRIBUTE$PbasicTransformer$Pdv
#define $PbasicTransformer$Pdv__varInfo data->modelData.realVarsData[11].info
#define $P$PRE$PbasicTransformer$Pdv__varInfo data->modelData.realVarsData[11].info
#define _$Pi2B(i) data->localData[i]->realVars[12]
#define _$P$PRE$Pi2B(i) $P$PRE$Pi2B
#define $Pi2B _$Pi2B(0)
#define $P$PRE$Pi2B data->simulationInfo.realVarsPre[12]
#define $P$ATTRIBUTE$Pi2B data->modelData.realVarsData[12].attribute
#define $P$ATTRIBUTE$P$PRE$Pi2B $P$ATTRIBUTE$Pi2B
#define $Pi2B__varInfo data->modelData.realVarsData[12].info
#define $P$PRE$Pi2B__varInfo data->modelData.realVarsData[12].info
#define _$Pv2B(i) data->localData[i]->realVars[13]
#define _$P$PRE$Pv2B(i) $P$PRE$Pv2B
#define $Pv2B _$Pv2B(0)
#define $P$PRE$Pv2B data->simulationInfo.realVarsPre[13]
#define $P$ATTRIBUTE$Pv2B data->modelData.realVarsData[13].attribute
#define $P$ATTRIBUTE$P$PRE$Pv2B $P$ATTRIBUTE$Pv2B
#define $Pv2B__varInfo data->modelData.realVarsData[13].info
#define $P$PRE$Pv2B__varInfo data->modelData.realVarsData[13].info
#define _$Pi1B(i) data->localData[i]->realVars[14]
#define _$P$PRE$Pi1B(i) $P$PRE$Pi1B
#define $Pi1B _$Pi1B(0)
#define $P$PRE$Pi1B data->simulationInfo.realVarsPre[14]
#define $P$ATTRIBUTE$Pi1B data->modelData.realVarsData[14].attribute
#define $P$ATTRIBUTE$P$PRE$Pi1B $P$ATTRIBUTE$Pi1B
#define $Pi1B__varInfo data->modelData.realVarsData[14].info
#define $P$PRE$Pi1B__varInfo data->modelData.realVarsData[14].info
#define _$Pv1B(i) data->localData[i]->realVars[15]
#define _$P$PRE$Pv1B(i) $P$PRE$Pv1B
#define $Pv1B _$Pv1B(0)
#define $P$PRE$Pv1B data->simulationInfo.realVarsPre[15]
#define $P$ATTRIBUTE$Pv1B data->modelData.realVarsData[15].attribute
#define $P$ATTRIBUTE$P$PRE$Pv1B $P$ATTRIBUTE$Pv1B
#define $Pv1B__varInfo data->modelData.realVarsData[15].info
#define $P$PRE$Pv1B__varInfo data->modelData.realVarsData[15].info
#define _$Pground12$Pp$Pi(i) data->localData[i]->realVars[16]
#define _$P$PRE$Pground12$Pp$Pi(i) $P$PRE$Pground12$Pp$Pi
#define $Pground12$Pp$Pi _$Pground12$Pp$Pi(0)
#define $P$PRE$Pground12$Pp$Pi data->simulationInfo.realVarsPre[16]
#define $P$ATTRIBUTE$Pground12$Pp$Pi data->modelData.realVarsData[16].attribute
#define $P$ATTRIBUTE$P$PRE$Pground12$Pp$Pi $P$ATTRIBUTE$Pground12$Pp$Pi
#define $Pground12$Pp$Pi__varInfo data->modelData.realVarsData[16].info
#define $P$PRE$Pground12$Pp$Pi__varInfo data->modelData.realVarsData[16].info
#define _$Pground11$Pp$Pi(i) data->localData[i]->realVars[17]
#define _$P$PRE$Pground11$Pp$Pi(i) $P$PRE$Pground11$Pp$Pi
#define $Pground11$Pp$Pi _$Pground11$Pp$Pi(0)
#define $P$PRE$Pground11$Pp$Pi data->simulationInfo.realVarsPre[17]
#define $P$ATTRIBUTE$Pground11$Pp$Pi data->modelData.realVarsData[17].attribute
#define $P$ATTRIBUTE$P$PRE$Pground11$Pp$Pi $P$ATTRIBUTE$Pground11$Pp$Pi
#define $Pground11$Pp$Pi__varInfo data->modelData.realVarsData[17].info
#define $P$PRE$Pground11$Pp$Pi__varInfo data->modelData.realVarsData[17].info
#define _$Pload1$PR_actual(i) data->localData[i]->realVars[18]
#define _$P$PRE$Pload1$PR_actual(i) $P$PRE$Pload1$PR_actual
#define $Pload1$PR_actual _$Pload1$PR_actual(0)
#define $P$PRE$Pload1$PR_actual data->simulationInfo.realVarsPre[18]
#define $P$ATTRIBUTE$Pload1$PR_actual data->modelData.realVarsData[18].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PR_actual $P$ATTRIBUTE$Pload1$PR_actual
#define $Pload1$PR_actual__varInfo data->modelData.realVarsData[18].info
#define $P$PRE$Pload1$PR_actual__varInfo data->modelData.realVarsData[18].info
#define _$Presistor12$PR_actual(i) data->localData[i]->realVars[19]
#define _$P$PRE$Presistor12$PR_actual(i) $P$PRE$Presistor12$PR_actual
#define $Presistor12$PR_actual _$Presistor12$PR_actual(0)
#define $P$PRE$Presistor12$PR_actual data->simulationInfo.realVarsPre[19]
#define $P$ATTRIBUTE$Presistor12$PR_actual data->modelData.realVarsData[19].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PR_actual $P$ATTRIBUTE$Presistor12$PR_actual
#define $Presistor12$PR_actual__varInfo data->modelData.realVarsData[19].info
#define $P$PRE$Presistor12$PR_actual__varInfo data->modelData.realVarsData[19].info
#define _$Presistor11$PR_actual(i) data->localData[i]->realVars[20]
#define _$P$PRE$Presistor11$PR_actual(i) $P$PRE$Presistor11$PR_actual
#define $Presistor11$PR_actual _$Presistor11$PR_actual(0)
#define $P$PRE$Presistor11$PR_actual data->simulationInfo.realVarsPre[20]
#define $P$ATTRIBUTE$Presistor11$PR_actual data->modelData.realVarsData[20].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PR_actual $P$ATTRIBUTE$Presistor11$PR_actual
#define $Presistor11$PR_actual__varInfo data->modelData.realVarsData[20].info
#define $P$PRE$Presistor11$PR_actual__varInfo data->modelData.realVarsData[20].info
#define _$Pground12$Pp$Pv(i) data->localData[i]->realVars[21]
#define _$P$PRE$Pground12$Pp$Pv(i) $P$PRE$Pground12$Pp$Pv
#define $Pground12$Pp$Pv _$Pground12$Pp$Pv(0)
#define $P$PRE$Pground12$Pp$Pv data->simulationInfo.realVarsPre[21]
#define $P$ATTRIBUTE$Pground12$Pp$Pv data->modelData.realVarsData[21].attribute
#define $P$ATTRIBUTE$P$PRE$Pground12$Pp$Pv $P$ATTRIBUTE$Pground12$Pp$Pv
#define $Pground12$Pp$Pv__varInfo data->modelData.realVarsData[21].info
#define $P$PRE$Pground12$Pp$Pv__varInfo data->modelData.realVarsData[21].info
#define _$Pground11$Pp$Pv(i) data->localData[i]->realVars[22]
#define _$P$PRE$Pground11$Pp$Pv(i) $P$PRE$Pground11$Pp$Pv
#define $Pground11$Pp$Pv _$Pground11$Pp$Pv(0)
#define $P$PRE$Pground11$Pp$Pv data->simulationInfo.realVarsPre[22]
#define $P$ATTRIBUTE$Pground11$Pp$Pv data->modelData.realVarsData[22].attribute
#define $P$ATTRIBUTE$P$PRE$Pground11$Pp$Pv $P$ATTRIBUTE$Pground11$Pp$Pv
#define $Pground11$Pp$Pv__varInfo data->modelData.realVarsData[22].info
#define $P$PRE$Pground11$Pp$Pv__varInfo data->modelData.realVarsData[22].info

/* Algebraic Parameter */
#define $PVdc data->simulationInfo.realParameter[0]
#define _$PVdc(i) $PVdc
#define $P$ATTRIBUTE$PVdc data->modelData.realParameterData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PVdc $P$ATTRIBUTE$PVdc
#define $PVdc__varInfo data->modelData.realParameterData[0].info
#define $PVpeak data->simulationInfo.realParameter[1]
#define _$PVpeak(i) $PVpeak
#define $P$ATTRIBUTE$PVpeak data->modelData.realParameterData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PVpeak $P$ATTRIBUTE$PVpeak
#define $PVpeak__varInfo data->modelData.realParameterData[1].info
#define $Pf data->simulationInfo.realParameter[2]
#define _$Pf(i) $Pf
#define $P$ATTRIBUTE$Pf data->modelData.realParameterData[2].attribute
#define $P$ATTRIBUTE$P$PRE$Pf $P$ATTRIBUTE$Pf
#define $Pf__varInfo data->modelData.realParameterData[2].info
#define $Pphi0 data->simulationInfo.realParameter[3]
#define _$Pphi0(i) $Pphi0
#define $P$ATTRIBUTE$Pphi0 data->modelData.realParameterData[3].attribute
#define $P$ATTRIBUTE$P$PRE$Pphi0 $P$ATTRIBUTE$Pphi0
#define $Pphi0__varInfo data->modelData.realParameterData[3].info
#define $Pn data->simulationInfo.realParameter[4]
#define _$Pn(i) $Pn
#define $P$ATTRIBUTE$Pn data->modelData.realParameterData[4].attribute
#define $P$ATTRIBUTE$P$PRE$Pn $P$ATTRIBUTE$Pn
#define $Pn__varInfo data->modelData.realParameterData[4].info
#define $PR1 data->simulationInfo.realParameter[5]
#define _$PR1(i) $PR1
#define $P$ATTRIBUTE$PR1 data->modelData.realParameterData[5].attribute
#define $P$ATTRIBUTE$P$PRE$PR1 $P$ATTRIBUTE$PR1
#define $PR1__varInfo data->modelData.realParameterData[5].info
#define $PL1sigma data->simulationInfo.realParameter[6]
#define _$PL1sigma(i) $PL1sigma
#define $P$ATTRIBUTE$PL1sigma data->modelData.realParameterData[6].attribute
#define $P$ATTRIBUTE$P$PRE$PL1sigma $P$ATTRIBUTE$PL1sigma
#define $PL1sigma__varInfo data->modelData.realParameterData[6].info
#define $PLm1 data->simulationInfo.realParameter[7]
#define _$PLm1(i) $PLm1
#define $P$ATTRIBUTE$PLm1 data->modelData.realParameterData[7].attribute
#define $P$ATTRIBUTE$P$PRE$PLm1 $P$ATTRIBUTE$PLm1
#define $PLm1__varInfo data->modelData.realParameterData[7].info
#define $PL2sigma data->simulationInfo.realParameter[8]
#define _$PL2sigma(i) $PL2sigma
#define $P$ATTRIBUTE$PL2sigma data->modelData.realParameterData[8].attribute
#define $P$ATTRIBUTE$P$PRE$PL2sigma $P$ATTRIBUTE$PL2sigma
#define $PL2sigma__varInfo data->modelData.realParameterData[8].info
#define $PR2 data->simulationInfo.realParameter[9]
#define _$PR2(i) $PR2
#define $P$ATTRIBUTE$PR2 data->modelData.realParameterData[9].attribute
#define $P$ATTRIBUTE$P$PRE$PR2 $P$ATTRIBUTE$PR2
#define $PR2__varInfo data->modelData.realParameterData[9].info
#define $PRL data->simulationInfo.realParameter[10]
#define _$PRL(i) $PRL
#define $P$ATTRIBUTE$PRL data->modelData.realParameterData[10].attribute
#define $P$ATTRIBUTE$P$PRE$PRL $P$ATTRIBUTE$PRL
#define $PRL__varInfo data->modelData.realParameterData[10].info
#define $PL1 data->simulationInfo.realParameter[11]
#define _$PL1(i) $PL1
#define $P$ATTRIBUTE$PL1 data->modelData.realParameterData[11].attribute
#define $P$ATTRIBUTE$P$PRE$PL1 $P$ATTRIBUTE$PL1
#define $PL1__varInfo data->modelData.realParameterData[11].info
#define $PL2 data->simulationInfo.realParameter[12]
#define _$PL2(i) $PL2
#define $P$ATTRIBUTE$PL2 data->modelData.realParameterData[12].attribute
#define $P$ATTRIBUTE$P$PRE$PL2 $P$ATTRIBUTE$PL2
#define $PL2__varInfo data->modelData.realParameterData[12].info
#define $PM data->simulationInfo.realParameter[13]
#define _$PM(i) $PM
#define $P$ATTRIBUTE$PM data->modelData.realParameterData[13].attribute
#define $P$ATTRIBUTE$P$PRE$PM $P$ATTRIBUTE$PM
#define $PM__varInfo data->modelData.realParameterData[13].info
#define $PbasicTransformer$PL1 data->simulationInfo.realParameter[14]
#define _$PbasicTransformer$PL1(i) $PbasicTransformer$PL1
#define $P$ATTRIBUTE$PbasicTransformer$PL1 data->modelData.realParameterData[14].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$PL1 $P$ATTRIBUTE$PbasicTransformer$PL1
#define $PbasicTransformer$PL1__varInfo data->modelData.realParameterData[14].info
#define $PbasicTransformer$PL2 data->simulationInfo.realParameter[15]
#define _$PbasicTransformer$PL2(i) $PbasicTransformer$PL2
#define $P$ATTRIBUTE$PbasicTransformer$PL2 data->modelData.realParameterData[15].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$PL2 $P$ATTRIBUTE$PbasicTransformer$PL2
#define $PbasicTransformer$PL2__varInfo data->modelData.realParameterData[15].info
#define $PbasicTransformer$PM data->simulationInfo.realParameter[16]
#define _$PbasicTransformer$PM(i) $PbasicTransformer$PM
#define $P$ATTRIBUTE$PbasicTransformer$PM data->modelData.realParameterData[16].attribute
#define $P$ATTRIBUTE$P$PRE$PbasicTransformer$PM $P$ATTRIBUTE$PbasicTransformer$PM
#define $PbasicTransformer$PM__varInfo data->modelData.realParameterData[16].info
#define $PsineVoltage1$Poffset data->simulationInfo.realParameter[17]
#define _$PsineVoltage1$Poffset(i) $PsineVoltage1$Poffset
#define $P$ATTRIBUTE$PsineVoltage1$Poffset data->modelData.realParameterData[17].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$Poffset $P$ATTRIBUTE$PsineVoltage1$Poffset
#define $PsineVoltage1$Poffset__varInfo data->modelData.realParameterData[17].info
#define $PsineVoltage1$PstartTime data->simulationInfo.realParameter[18]
#define _$PsineVoltage1$PstartTime(i) $PsineVoltage1$PstartTime
#define $P$ATTRIBUTE$PsineVoltage1$PstartTime data->modelData.realParameterData[18].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PstartTime $P$ATTRIBUTE$PsineVoltage1$PstartTime
#define $PsineVoltage1$PstartTime__varInfo data->modelData.realParameterData[18].info
#define $PsineVoltage1$PV data->simulationInfo.realParameter[19]
#define _$PsineVoltage1$PV(i) $PsineVoltage1$PV
#define $P$ATTRIBUTE$PsineVoltage1$PV data->modelData.realParameterData[19].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PV $P$ATTRIBUTE$PsineVoltage1$PV
#define $PsineVoltage1$PV__varInfo data->modelData.realParameterData[19].info
#define $PsineVoltage1$Pphase data->simulationInfo.realParameter[20]
#define _$PsineVoltage1$Pphase(i) $PsineVoltage1$Pphase
#define $P$ATTRIBUTE$PsineVoltage1$Pphase data->modelData.realParameterData[20].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$Pphase $P$ATTRIBUTE$PsineVoltage1$Pphase
#define $PsineVoltage1$Pphase__varInfo data->modelData.realParameterData[20].info
#define $PsineVoltage1$PfreqHz data->simulationInfo.realParameter[21]
#define _$PsineVoltage1$PfreqHz(i) $PsineVoltage1$PfreqHz
#define $P$ATTRIBUTE$PsineVoltage1$PfreqHz data->modelData.realParameterData[21].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PfreqHz $P$ATTRIBUTE$PsineVoltage1$PfreqHz
#define $PsineVoltage1$PfreqHz__varInfo data->modelData.realParameterData[21].info
#define $PsineVoltage1$PsignalSource$Pamplitude data->simulationInfo.realParameter[22]
#define _$PsineVoltage1$PsignalSource$Pamplitude(i) $PsineVoltage1$PsignalSource$Pamplitude
#define $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Pamplitude data->modelData.realParameterData[22].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PsignalSource$Pamplitude $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Pamplitude
#define $PsineVoltage1$PsignalSource$Pamplitude__varInfo data->modelData.realParameterData[22].info
#define $PsineVoltage1$PsignalSource$PfreqHz data->simulationInfo.realParameter[23]
#define _$PsineVoltage1$PsignalSource$PfreqHz(i) $PsineVoltage1$PsignalSource$PfreqHz
#define $P$ATTRIBUTE$PsineVoltage1$PsignalSource$PfreqHz data->modelData.realParameterData[23].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PsignalSource$PfreqHz $P$ATTRIBUTE$PsineVoltage1$PsignalSource$PfreqHz
#define $PsineVoltage1$PsignalSource$PfreqHz__varInfo data->modelData.realParameterData[23].info
#define $PsineVoltage1$PsignalSource$Pphase data->simulationInfo.realParameter[24]
#define _$PsineVoltage1$PsignalSource$Pphase(i) $PsineVoltage1$PsignalSource$Pphase
#define $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Pphase data->modelData.realParameterData[24].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PsignalSource$Pphase $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Pphase
#define $PsineVoltage1$PsignalSource$Pphase__varInfo data->modelData.realParameterData[24].info
#define $PsineVoltage1$PsignalSource$Poffset data->simulationInfo.realParameter[25]
#define _$PsineVoltage1$PsignalSource$Poffset(i) $PsineVoltage1$PsignalSource$Poffset
#define $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Poffset data->modelData.realParameterData[25].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PsignalSource$Poffset $P$ATTRIBUTE$PsineVoltage1$PsignalSource$Poffset
#define $PsineVoltage1$PsignalSource$Poffset__varInfo data->modelData.realParameterData[25].info
#define $PsineVoltage1$PsignalSource$PstartTime data->simulationInfo.realParameter[26]
#define _$PsineVoltage1$PsignalSource$PstartTime(i) $PsineVoltage1$PsignalSource$PstartTime
#define $P$ATTRIBUTE$PsineVoltage1$PsignalSource$PstartTime data->modelData.realParameterData[26].attribute
#define $P$ATTRIBUTE$P$PRE$PsineVoltage1$PsignalSource$PstartTime $P$ATTRIBUTE$PsineVoltage1$PsignalSource$PstartTime
#define $PsineVoltage1$PsignalSource$PstartTime__varInfo data->modelData.realParameterData[26].info
#define $Presistor11$PR data->simulationInfo.realParameter[27]
#define _$Presistor11$PR(i) $Presistor11$PR
#define $P$ATTRIBUTE$Presistor11$PR data->modelData.realParameterData[27].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PR $P$ATTRIBUTE$Presistor11$PR
#define $Presistor11$PR__varInfo data->modelData.realParameterData[27].info
#define $Presistor11$PT_ref data->simulationInfo.realParameter[28]
#define _$Presistor11$PT_ref(i) $Presistor11$PT_ref
#define $P$ATTRIBUTE$Presistor11$PT_ref data->modelData.realParameterData[28].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PT_ref $P$ATTRIBUTE$Presistor11$PT_ref
#define $Presistor11$PT_ref__varInfo data->modelData.realParameterData[28].info
#define $Presistor11$Palpha data->simulationInfo.realParameter[29]
#define _$Presistor11$Palpha(i) $Presistor11$Palpha
#define $P$ATTRIBUTE$Presistor11$Palpha data->modelData.realParameterData[29].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$Palpha $P$ATTRIBUTE$Presistor11$Palpha
#define $Presistor11$Palpha__varInfo data->modelData.realParameterData[29].info
#define $Presistor11$PT data->simulationInfo.realParameter[30]
#define _$Presistor11$PT(i) $Presistor11$PT
#define $P$ATTRIBUTE$Presistor11$PT data->modelData.realParameterData[30].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PT $P$ATTRIBUTE$Presistor11$PT
#define $Presistor11$PT__varInfo data->modelData.realParameterData[30].info
#define $Pload1$PR data->simulationInfo.realParameter[31]
#define _$Pload1$PR(i) $Pload1$PR
#define $P$ATTRIBUTE$Pload1$PR data->modelData.realParameterData[31].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PR $P$ATTRIBUTE$Pload1$PR
#define $Pload1$PR__varInfo data->modelData.realParameterData[31].info
#define $Pload1$PT_ref data->simulationInfo.realParameter[32]
#define _$Pload1$PT_ref(i) $Pload1$PT_ref
#define $P$ATTRIBUTE$Pload1$PT_ref data->modelData.realParameterData[32].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PT_ref $P$ATTRIBUTE$Pload1$PT_ref
#define $Pload1$PT_ref__varInfo data->modelData.realParameterData[32].info
#define $Pload1$Palpha data->simulationInfo.realParameter[33]
#define _$Pload1$Palpha(i) $Pload1$Palpha
#define $P$ATTRIBUTE$Pload1$Palpha data->modelData.realParameterData[33].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$Palpha $P$ATTRIBUTE$Pload1$Palpha
#define $Pload1$Palpha__varInfo data->modelData.realParameterData[33].info
#define $Pload1$PT data->simulationInfo.realParameter[34]
#define _$Pload1$PT(i) $Pload1$PT
#define $P$ATTRIBUTE$Pload1$PT data->modelData.realParameterData[34].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PT $P$ATTRIBUTE$Pload1$PT
#define $Pload1$PT__varInfo data->modelData.realParameterData[34].info
#define $Presistor12$PR data->simulationInfo.realParameter[35]
#define _$Presistor12$PR(i) $Presistor12$PR
#define $P$ATTRIBUTE$Presistor12$PR data->modelData.realParameterData[35].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PR $P$ATTRIBUTE$Presistor12$PR
#define $Presistor12$PR__varInfo data->modelData.realParameterData[35].info
#define $Presistor12$PT_ref data->simulationInfo.realParameter[36]
#define _$Presistor12$PT_ref(i) $Presistor12$PT_ref
#define $P$ATTRIBUTE$Presistor12$PT_ref data->modelData.realParameterData[36].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PT_ref $P$ATTRIBUTE$Presistor12$PT_ref
#define $Presistor12$PT_ref__varInfo data->modelData.realParameterData[36].info
#define $Presistor12$Palpha data->simulationInfo.realParameter[37]
#define _$Presistor12$Palpha(i) $Presistor12$Palpha
#define $P$ATTRIBUTE$Presistor12$Palpha data->modelData.realParameterData[37].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$Palpha $P$ATTRIBUTE$Presistor12$Palpha
#define $Presistor12$Palpha__varInfo data->modelData.realParameterData[37].info
#define $Presistor12$PT data->simulationInfo.realParameter[38]
#define _$Presistor12$PT(i) $Presistor12$PT
#define $P$ATTRIBUTE$Presistor12$PT data->modelData.realParameterData[38].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PT $P$ATTRIBUTE$Presistor12$PT
#define $Presistor12$PT__varInfo data->modelData.realParameterData[38].info

/* External Objects */

/* Algebraic Integer Vars */

/* Algebraic Integer Parameter */

/* Algebraic Boolean Vars */

/* Algebraic Boolean Parameters */
#define $Presistor11$PuseHeatPort data->simulationInfo.booleanParameter[0]
#define _$Presistor11$PuseHeatPort(i) $Presistor11$PuseHeatPort
#define $P$ATTRIBUTE$Presistor11$PuseHeatPort data->modelData.booleanParameterData[0].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor11$PuseHeatPort $P$ATTRIBUTE$Presistor11$PuseHeatPort
#define $Presistor11$PuseHeatPort__varInfo data->modelData.booleanParameterData[0].info
#define $Pload1$PuseHeatPort data->simulationInfo.booleanParameter[1]
#define _$Pload1$PuseHeatPort(i) $Pload1$PuseHeatPort
#define $P$ATTRIBUTE$Pload1$PuseHeatPort data->modelData.booleanParameterData[1].attribute
#define $P$ATTRIBUTE$P$PRE$Pload1$PuseHeatPort $P$ATTRIBUTE$Pload1$PuseHeatPort
#define $Pload1$PuseHeatPort__varInfo data->modelData.booleanParameterData[1].info
#define $Presistor12$PuseHeatPort data->simulationInfo.booleanParameter[2]
#define _$Presistor12$PuseHeatPort(i) $Presistor12$PuseHeatPort
#define $P$ATTRIBUTE$Presistor12$PuseHeatPort data->modelData.booleanParameterData[2].attribute
#define $P$ATTRIBUTE$P$PRE$Presistor12$PuseHeatPort $P$ATTRIBUTE$Presistor12$PuseHeatPort
#define $Presistor12$PuseHeatPort__varInfo data->modelData.booleanParameterData[2].info

/* Algebraic String Variables */

/* Algebraic String Parameter */

/* sample */

/* Jacobian Variables */
#if defined(_MSC_VER)
extern "C" {
#endif
  const int INDEX_JAC_G = 0;
  int functionJacG_column(void* data);
  int initialAnalyticJacobianG(void* data);
#if defined(_MSC_VER)
}
#endif
/* G */
/* G sparse indexes */

#if defined(_MSC_VER)
extern "C" {
#endif
  const int INDEX_JAC_A = 1;
  int functionJacA_column(void* data);
  int initialAnalyticJacobianA(void* data);
#if defined(_MSC_VER)
}
#endif
/* A */
#define $PbasicTransformer$Pi2$pDERA$PbasicTransformer$Pi2 data->simulationInfo.analyticJacobians[1].seedVars[0]
#define $PbasicTransformer$Pi2$pDERA$PbasicTransformer$Pi2__varInfo dummyVAR_INFO
#define $PbasicTransformer$Pi1$pDERA$PbasicTransformer$Pi1 data->simulationInfo.analyticJacobians[1].seedVars[1]
#define $PbasicTransformer$Pi1$pDERA$PbasicTransformer$Pi1__varInfo dummyVAR_INFO
/* A sparse indexes */
#define $PbasicTransformer$Pi2$pDERA$indexdiff 0
#define $PbasicTransformer$Pi1$pDERA$indexdiff 1
#define $PbasicTransformer$Pi2$pDERA$indexdiffed 0
#define $PbasicTransformer$Pi1$pDERA$indexdiffed 1
#if defined(_MSC_VER)
extern "C" {
#endif
  const int INDEX_JAC_B = 2;
  int functionJacB_column(void* data);
  int initialAnalyticJacobianB(void* data);
#if defined(_MSC_VER)
}
#endif
/* B */
/* B sparse indexes */

#if defined(_MSC_VER)
extern "C" {
#endif
  const int INDEX_JAC_C = 3;
  int functionJacC_column(void* data);
  int initialAnalyticJacobianC(void* data);
#if defined(_MSC_VER)
}
#endif
/* C */
/* C sparse indexes */

#if defined(_MSC_VER)
extern "C" {
#endif
  const int INDEX_JAC_D = 4;
  int functionJacD_column(void* data);
  int initialAnalyticJacobianD(void* data);
#if defined(_MSC_VER)
}
#endif
/* D */
/* D sparse indexes */

