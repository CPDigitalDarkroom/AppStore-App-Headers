/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBugReportReportAProblemViewDelegate;
@class UIView, UITableView, UIButton;

@interface FBBugReportReportAProblemView : UIView {

	UIView* _longDividerBottom;
	float _horizontalMargin;
	float _cancelButtonHeight;
	float _dividerHeight;
	float _dialogMaxWidth;
	UITableView* _tinesTableView;
	UIButton* _cancelButton;
	id<FBBugReportReportAProblemViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tinesTableView;                                           //@synthesize tinesTableView=_tinesTableView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBBugReportReportAProblemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)initializeLayoutParameters;
-(void)setTinesTableView:(UITableView *)arg1 ;
-(UITableView *)tinesTableView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBBugReportReportAProblemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBBugReportReportAProblemViewDelegate>)delegate;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
@end

