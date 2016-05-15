/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface T1ResizableHeaderSubheaderInfo : NSObject {

	float _topSpacing;
	float _bottomSpacing;
	float _animationProgress;
	float _lastPreferredHeight;
	float _animationStartHeight;
	int _animationMode;
	unsigned _options;
	/*^block*/id _animationComplete;

}

@property (assign,nonatomic) float topSpacing;                                       //@synthesize topSpacing=_topSpacing - In the implementation block
@property (assign,nonatomic) float bottomSpacing;                                    //@synthesize bottomSpacing=_bottomSpacing - In the implementation block
@property (assign,nonatomic) float animationProgress;                                //@synthesize animationProgress=_animationProgress - In the implementation block
@property (assign,nonatomic) float lastPreferredHeight;                              //@synthesize lastPreferredHeight=_lastPreferredHeight - In the implementation block
@property (assign,nonatomic) float animationStartHeight;                             //@synthesize animationStartHeight=_animationStartHeight - In the implementation block
@property (assign,nonatomic) int animationMode;                                      //@synthesize animationMode=_animationMode - In the implementation block
@property (assign,nonatomic) unsigned options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id animationComplete;                                     //@synthesize animationComplete=_animationComplete - In the implementation block
@property (getter=isInitializing,nonatomic,readonly) char initializing; 
-(void)setAnimationComplete:(id)arg1 ;
-(void)setTopSpacing:(float)arg1 ;
-(void)setBottomSpacing:(float)arg1 ;
-(float)lastPreferredHeight;
-(int)animationMode;
-(void)setAnimationMode:(int)arg1 ;
-(void)setAnimationProgress:(float)arg1 ;
-(void)setAnimationStartHeight:(float)arg1 ;
-(void)setLastPreferredHeight:(float)arg1 ;
-(void)invokeAnimationCompletion;
-(float)animationStartHeight;
-(float)animationProgress;
-(float)bottomSpacing;
-(float)topSpacing;
-(id)animationComplete;
-(char)isInitializing;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
@end

