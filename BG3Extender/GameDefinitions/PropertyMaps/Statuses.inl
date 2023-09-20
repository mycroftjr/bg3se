BEGIN_CLS(esv::Status)
P(field_8)
P_RO(field_18)
P(StoryActionID)
P(Originator)
P_RO(field_48)
P_RO(StatusId)
P(StartTimer)
P(LifeTime)
P(CurrentLifeTime)
P(TurnTimer)
P(Strength)
P(CauseType)
P(OriginCauseType)
P(SourceEquippedItem)
P(SourceUsedItem)
P_RO(StatusHandle)
P(SyncEntity)
P_RO(Owner)
P(StatusOwner)
P(Cause)
P(CauseGUID)
P(StatusSource)
P(Combat_M)
P(field_E0)
P(field_E8)
P_RO(ConditionsId)
P(RemoveEvents)
P(Flags)
P_BITMASK(Flags)
P(Flags2)
P_BITMASK(Flags2)
P(Flags3)
P_BITMASK(Flags3)
P(FreezeDuration)
P(field_104)
P(field_105)
P(SpellCastingAbility)
P(SourceSpell)
P(SpellCastSourceUuid)
P(StackId)
P(StackPriority)
P(IsRecoverable)
P(DifficultyStatus)
P(field_150)
// TODO - P(ConditionRolls)
P(TickType)
P(Flags4)
P_BITMASK(Flags4)
P(Flags5)
P_BITMASK(Flags5)

//P_FUN(GetEngineType, StatusGetEngineType)
END_CLS()


BEGIN_CLS(esv::StatusAura)
INHERIT(esv::Status)
// P(Aura) - TODO - map aura type
END_CLS()


BEGIN_CLS(esv::StatusBoost)
INHERIT(esv::StatusAura)
P(Spell)
P(Items)
P(LoseControl)
P(ItemHandles)
P(EffectTime)
P(BoostStackId)
P(SourceDirection)
// P(SurfaceChanges) - TODO
END_CLS()


BEGIN_CLS(esv::StatusActiveDefense)
INHERIT(esv::StatusBoost)
P(Charges)
P(TargetPos)
P(Target)
P(Radius)
P(Projectile)
P_RO(TargetConditions_M) // TODO - map conditions
P(UnknVectors)
P(PreviousTargets)
END_CLS()


BEGIN_CLS(esv::StatusClimbing)
INHERIT(esv::Status)
P_RO(MoveDirection_M)
P_RO(Item)
P_RO(Level)
P_RO(Status)
P_RO(Direction)
P_RO(JumpUpLadders_M)
P_RO(Incapacitated_M)
P_RO(Started_M)
END_CLS()


BEGIN_CLS(esv::StatusDestroying)
INHERIT(esv::Status)
P(HitDescription)
END_CLS()


BEGIN_CLS(esv::StatusIncapacitated)
INHERIT(esv::StatusBoost)
P(CurrentFreezeTime)
P(FreezeTime)
P(IncapacitateFlags)
P(IncapacitationAnimationFinished)
END_CLS()


BEGIN_CLS(esv::StatusDowned)
INHERIT(esv::StatusIncapacitated)
P(NumStableSuccess)
P(NumStableFailed)
P(StableRollDC)
// FIXME - Roll, OnFailed, OnSuccess, pRoll
P(IsStable)
P(IsHealed)
P(RollSuccesses)
P(RollFailures)
P(DamageFailures)
END_CLS()


BEGIN_CLS(esv::StatusDying)
INHERIT(esv::Status)
P_RO(Source)
P(HitDescription)
P_RO(Combat)
P_RO(DyingFlags)
END_CLS()


BEGIN_CLS(esv::StatusEncumbered)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusHeal)
INHERIT(esv::Status)
P(EffectTime)
P(HealAmount)
P(HealEffect)
P(HealEffectId)
P(HealType)
P(AbsorbSurfaceRange)
P(TargetDependentHeal)
P(TargetDependentValue)
P(TargetDependentHealAmount)
END_CLS()


BEGIN_CLS(esv::StatusHealSharing)
INHERIT(esv::StatusBoost)
P(Caster)
END_CLS()


BEGIN_CLS(esv::StatusHealSharingCaster)
INHERIT(esv::StatusBoost)
P(Targets)
END_CLS()


BEGIN_CLS(esv::StatusHealing)
INHERIT(esv::StatusBoost)
P(HealAmount)
P(TimeElapsed)
P(HealEffect)
P(HealEffectId)
P(SkipInitialEffect)
P(HealingEvent)
P(HealType)
P(AbsorbSurfaceRange)
END_CLS()


BEGIN_CLS(esv::StatusIdentify)
INHERIT(esv::Status)
P(Level)
P(Identified)
P(Identifier)
END_CLS()


BEGIN_CLS(esv::StatusInSurface)
INHERIT(esv::Status)
// TODO - LayerChecks
P(Translate)
END_CLS()


BEGIN_CLS(esv::StatusInfectiousDiseased)
INHERIT(esv::StatusBoost)
P(InfectiousDiseaseDepth)
P(InfectTimer)
P(InfectiousDiseaseRadius)
P(Target)
END_CLS()


BEGIN_CLS(esv::StatusInvisible)
INHERIT(esv::StatusBoost)
P(InvisiblePosition)
END_CLS()


BEGIN_CLS(esv::StatusKnockedDown)
INHERIT(esv::Status)
P(KnockedDownState)
P(IsInstant)
END_CLS()


BEGIN_CLS(esv::StatusMaterial)
INHERIT(esv::Status)
P(MaterialUUID)
P(ApplyFlags)
P(IsOverlayMaterial)
P(Fading)
P(ApplyNormalMap)
P(Force)
END_CLS()


BEGIN_CLS(esv::StatusPolymorphed)
INHERIT(esv::StatusBoost)
P(Id)
END_CLS()


BEGIN_CLS(esv::StatusReaction)
INHERIT(esv::Status)
P(Source)
P(Target)
P(TargetPosition)
P(Partner)
P(ShowOverhead)
P(Spell)
P(IgnoreHasSpell)
P(IgnoreChecks)
END_CLS()


BEGIN_CLS(esv::StatusRepair)
INHERIT(esv::Status)
P(Level)
P(Repaired)
P(Repairer)
END_CLS()


BEGIN_CLS(esv::StatusRotate)
INHERIT(esv::Status)
P(Yaw)
P(RotationSpeed)
END_CLS()


BEGIN_CLS(esv::StatusSitting)
INHERIT(esv::Status)
P(Item)
P(Position)
END_CLS()


BEGIN_CLS(esv::StatusTeleportFalling)
INHERIT(esv::Status)
P(Target)
P(ReappearTime)
P(Spell)
P(HasDamage)
P(HasDamageBeenApplied)
END_CLS()


BEGIN_CLS(esv::StatusUnlock)
INHERIT(esv::Status)
P(Source)
P(Success)
P(Unlocked)
END_CLS()


BEGIN_CLS(esv::StatusSneaking)
INHERIT(esv::StatusBoost)
P(ClientRequestStop)
END_CLS()


BEGIN_CLS(esv::StatusSummoning)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusStoryFrozen)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusLying)
INHERIT(esv::StatusSitting)
END_CLS()


BEGIN_CLS(esv::StatusFear)
INHERIT(esv::StatusBoost)
END_CLS()


BEGIN_CLS(esv::StatusSmelly)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusClean)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusWindWalker)
INHERIT(esv::StatusBoost)
END_CLS()


BEGIN_CLS(esv::StatusDecayingTouch)
INHERIT(esv::StatusBoost)
END_CLS()


BEGIN_CLS(esv::StatusUnhealable)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusForceMove)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusConstrained)
INHERIT(esv::StatusSitting)
END_CLS()


BEGIN_CLS(esv::StatusEffect)
INHERIT(esv::Status)
END_CLS()


BEGIN_CLS(esv::StatusDeactivated)
INHERIT(esv::StatusBoost)
END_CLS()
