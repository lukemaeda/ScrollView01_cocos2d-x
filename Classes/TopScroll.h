//
//  TopScroll.h
//  ScrollView01
//
//  Created by MAEDAHAJIME on 2015/02/11.
//
//

#ifndef __ScrollView01__TopScroll__
#define __ScrollView01__TopScroll__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

class TopScroll :public Layer,
                 public ScrollViewDelegate // デリゲート
{
protected:
    // コンストラクタ
    TopScroll();
    // デストラクタ
    virtual ~TopScroll();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(TopScroll);
    
    void scrollViewDidScroll(ScrollView *view);
    void scrollViewDidZoom(ScrollView *view);
};

#endif /* defined(__ScrollView01__TopScroll__) */
