/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, UITableView, NSString;

@interface FBWebRTCCallLogView : UIView {

	UILabel* _nullStateLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	UITableView* _tableView;
	NSString* _nullStateMessage;
	unsigned _state;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * nullStateMessage;              //@synthesize nullStateMessage=_nullStateMessage - In the implementation block
@property (assign,nonatomic) unsigned state;                         //@synthesize state=_state - In the implementation block
-(void)setNullStateMessage:(NSString *)arg1 ;
-(NSString *)nullStateMessage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

