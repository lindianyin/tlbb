1.对象的结构
	Obj_Human -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Moster -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_Pet -> Obj_Character -> Obj_Dynamic -> Obj
	Obj_ItemBox -> Obj_Static -> Obj
	Obj_Platfrom -> Obj_Static -> Obj
	Obj_Special -> Obj_Static -> Obj
2.对象的类型
	enum ObjType
	{
		OBJ_TYPE_INVALID,			// 无效
		OBJ_TYPE_HUMAN,				// 玩家
		OBJ_TYPE_MONSTER,			// 战斗的NPC与怪物
		OBJ_TYPE_PET,				// 宠物
		OBJ_TYPE_ITEM_BOX,			// 掉落包
		OBJ_TYPE_PLATFORM,			// 工作台
		OBJ_TYPE_SPECIAL,			// 特殊（如，陷阱）
		OBJ_TYPE_NUMBERS
	};
