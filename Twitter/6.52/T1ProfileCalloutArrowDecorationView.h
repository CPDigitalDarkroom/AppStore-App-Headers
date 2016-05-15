/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface T1ProfileCalloutArrowDecorationView : UIView {

	UIColor* _fillColor;
	UIColor* _edgeColor;
	CGRect _arrowRect;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * edgeColor;              //@synthesize edgeColor=_edgeColor - In the implementation block
@property (assign,nonatomic) CGRect arrowRect;                 //@synthesize arrowRect=_arrowRect - In the implementation block
-(id)initWithFrame:(CGRect)arg1 arrowRect:(CGRect)arg2 fillColor:(id)arg3 edgeColor:(id)arg4 ;
-(void)setArrowRect:(CGRect)arg1 ;
-(void)setEdgeColor:(UIColor *)arg1 ;
-(CGRect)arrowRect;
-(UIColor *)edgeColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
@end

