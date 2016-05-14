/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessagesNuxView.h>

@protocol MNMessagesNuxViewDelegate;
@class MNMessagesNuxConfiguration, NSMutableArray, NSArray, UILabel, NSString;

@interface MNAnimatedThreadNuxView : UIView <MNMessagesNuxView> {

	NSMutableArray* _textLabelArray;
	NSArray* _labelTextCandidates;
	UILabel* _headerLabel;
	int _animationState;
	id<MNMessagesNuxViewDelegate> _delegate;
	MNMessagesNuxConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<MNMessagesNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMessagesNuxConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double showAnimationDelay; 
+(CGSize)sizeThatFitsWithMaxSize:(CGSize)arg1 forConfiguration:(id)arg2 ;
-(CGSize)sizeThatFitsWithMaxSize:(CGSize)arg1 ;
-(double)showAnimationDelay;
-(void)_handleTapGesture;
-(void)_initializeTextLabels;
-(void)_setTextLabelTexts;
-(void)_startAnimations;
-(void)_stopAnimations;
-(void)_layoutHeaderLabel;
-(void)_layoutTextLabels;
-(void)_runNextAnimation;
-(void)_runLabelAppearAnimation;
-(void)_runLabelDisappearAnimation;
-(void)_updateTextLabelTexts;
-(CGRect)_calculateNuxRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMessagesNuxViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMessagesNuxViewDelegate>)delegate;
-(void)setConfiguration:(MNMessagesNuxConfiguration *)arg1 ;
-(MNMessagesNuxConfiguration *)configuration;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end

