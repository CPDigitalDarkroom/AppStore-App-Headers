/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UITableViewCell.h>

@class CALayer, UIColor, FBStructuredSurveyUIStyleSheet, FBStructuredSurveyUIConfig;

@interface FBStructuredSurveyUICell : UITableViewCell {

	CALayer* _separatorLayer;
	float _separatorLineHeight;
	UIColor* _separatorLineColor;
	FBStructuredSurveyUIStyleSheet* _styleSheet;
	FBStructuredSurveyUIConfig* _config;

}

@property (assign,nonatomic) float separatorLineHeight;                                //@synthesize separatorLineHeight=_separatorLineHeight - In the implementation block
@property (nonatomic,retain) UIColor * separatorLineColor;                             //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIStyleSheet * styleSheet;              //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) FBStructuredSurveyUIConfig * config;                      //@synthesize config=_config - In the implementation block
+(float)_topPaddingForStyleSheet:(id)arg1 ;
+(float)_bottomPaddingForStyleSheet:(id)arg1 ;
+(float)heightForModelObject:(id)arg1 context:(id)arg2 frame:(CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5 ;
-(void)setStyleSheet:(FBStructuredSurveyUIStyleSheet *)arg1 ;
-(void)_layoutCellForFrame:(CGRect)arg1 ;
-(void)_configureSeparatorLine;
-(void)configureWithModelObject:(id)arg1 context:(id)arg2 ;
-(float)_cellContentHeight;
-(char)_isButtonLike;
-(float)separatorLineHeight;
-(void)setSeparatorLineHeight:(float)arg1 ;
-(UIColor *)separatorLineColor;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)accessibilityTraits;
-(char)_isChecked;
-(FBStructuredSurveyUIConfig *)config;
-(void)setConfig:(FBStructuredSurveyUIConfig *)arg1 ;
-(void)setSeparatorLineColor:(UIColor *)arg1 ;
-(FBStructuredSurveyUIStyleSheet *)styleSheet;
@end

