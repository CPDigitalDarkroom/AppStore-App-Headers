/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNuxStep.h>

@protocol FBNuxStep;
@class UIView, FBModalDialogViewConfig, NSString, NSArray;

@interface FBNuxModal : NSObject <FBNuxStep> {

	char _allowsGoingBackward;
	char _padShowFullScreenInterstitialInSheet;
	char _dimBackground;
	char _useAnchorPoint;
	UIView* _view;
	id<FBNuxStep> _nextStep;
	float _nuxViewYOffset;
	int _transitionAction;
	float _previousStepViewHeight;
	unsigned _allowedArrowDirections;
	/*^block*/id _viewProvider;
	/*^block*/id _hightlightedRegionsProvider;
	id<FBNuxStep> _firstSubStep;
	int _containerType;
	int _userTransitionAction;
	float _dimAlpha;
	FBModalDialogViewConfig* _config;
	id<FBNuxStep> _previousStep;
	CGPoint _arrowPositionInWindow;
	double _duration;
	CGPoint _anchorPoint;
	UIEdgeInsets _insetsFromWindow;
	UIEdgeInsets _insetsForContent;

}

@property (assign,nonatomic,__weak) id<FBNuxStep> previousStep;                      //@synthesize previousStep=_previousStep - In the implementation block
@property (nonatomic,copy) FBModalDialogViewConfig * config;                         //@synthesize config=_config - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBNuxStep> nextStep;                                 //@synthesize nextStep=_nextStep - In the implementation block
@property (nonatomic,retain) id<FBNuxStep> firstSubStep;                             //@synthesize firstSubStep=_firstSubStep - In the implementation block
@property (assign,nonatomic) unsigned allowedArrowDirections;                        //@synthesize allowedArrowDirections=_allowedArrowDirections - In the implementation block
@property (assign,nonatomic) CGPoint arrowPositionInWindow;                          //@synthesize arrowPositionInWindow=_arrowPositionInWindow - In the implementation block
@property (assign,nonatomic) float nuxViewYOffset;                                   //@synthesize nuxViewYOffset=_nuxViewYOffset - In the implementation block
@property (nonatomic,retain) UIView * view;                                          //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) char useAnchorPoint;                                    //@synthesize useAnchorPoint=_useAnchorPoint - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                    //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (nonatomic,copy) id viewProvider;                                          //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic) int transitionAction;                                   //@synthesize transitionAction=_transitionAction - In the implementation block
@property (assign,nonatomic) int userTransitionAction;                               //@synthesize userTransitionAction=_userTransitionAction - In the implementation block
@property (nonatomic,readonly) int containerType;                                    //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) char padShowFullScreenInterstitialInSheet;              //@synthesize padShowFullScreenInterstitialInSheet=_padShowFullScreenInterstitialInSheet - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float previousStepViewHeight;                           //@synthesize previousStepViewHeight=_previousStepViewHeight - In the implementation block
@property (nonatomic,readonly) char dimBackground;                                   //@synthesize dimBackground=_dimBackground - In the implementation block
@property (assign,nonatomic) float dimAlpha;                                         //@synthesize dimAlpha=_dimAlpha - In the implementation block
@property (nonatomic,copy) id hightlightedRegionsProvider;                           //@synthesize hightlightedRegionsProvider=_hightlightedRegionsProvider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetsFromWindow;                          //@synthesize insetsFromWindow=_insetsFromWindow - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetsForContent;                          //@synthesize insetsForContent=_insetsForContent - In the implementation block
@property (assign,nonatomic) char allowsGoingBackward;                               //@synthesize allowsGoingBackward=_allowsGoingBackward - In the implementation block
@property (nonatomic,retain) NSArray * passthroughViews; 
@property (nonatomic,readonly) int navigationControllerTransitionStyle; 
+(id)modalWithConfig:(id)arg1 ;
-(void)setAllowedArrowDirections:(unsigned)arg1 ;
-(void)setArrowPositionInWindow:(CGPoint)arg1 ;
-(void)setViewProvider:(id)arg1 ;
-(id)viewProvider;
-(Class)popoverBorderViewClass;
-(CGPoint)arrowPositionInWindow;
-(UIEdgeInsets)insetsFromWindow;
-(UIEdgeInsets)insetsForContent;
-(unsigned)allowedArrowDirections;
-(int)transitionAction;
-(void)setNuxViewYOffset:(float)arg1 ;
-(void)setInsetsFromWindow:(UIEdgeInsets)arg1 ;
-(void)setHightlightedRegionsProvider:(id)arg1 ;
-(void)setTransitionAction:(int)arg1 ;
-(int)userTransitionAction;
-(void)setPreviousStep:(id<FBNuxStep>)arg1 ;
-(id<FBNuxStep>)nextStep;
-(void)setNextStep:(id<FBNuxStep>)arg1 ;
-(id<FBNuxStep>)firstSubStep;
-(void)setFirstSubStep:(id<FBNuxStep>)arg1 ;
-(id<FBNuxStep>)previousStep;
-(float)nuxViewYOffset;
-(char)useAnchorPoint;
-(void)setUseAnchorPoint:(char)arg1 ;
-(void)setUserTransitionAction:(int)arg1 ;
-(char)padShowFullScreenInterstitialInSheet;
-(void)setPadShowFullScreenInterstitialInSheet:(char)arg1 ;
-(float)previousStepViewHeight;
-(void)setPreviousStepViewHeight:(float)arg1 ;
-(char)dimBackground;
-(float)dimAlpha;
-(void)setDimAlpha:(float)arg1 ;
-(id)hightlightedRegionsProvider;
-(void)setInsetsForContent:(UIEdgeInsets)arg1 ;
-(char)allowsGoingBackward;
-(void)setAllowsGoingBackward:(char)arg1 ;
-(id)init;
-(UIView *)view;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(Class)viewControllerClass;
-(FBModalDialogViewConfig *)config;
-(void)setConfig:(FBModalDialogViewConfig *)arg1 ;
-(int)containerType;
@end

