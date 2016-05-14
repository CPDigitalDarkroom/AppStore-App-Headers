/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MNPhotoReminderListInfoView, UITableView, NSString, FBListViewScrollManager;

@interface MNPhotoReminderListView : UIView {

	int _viewState;
	MNPhotoReminderListInfoView* _infoView;
	UITableView* _tableView;
	NSString* _loadingText;
	FBListViewScrollManager* _scrollManager;

}

@property (nonatomic,readonly) UITableView * tableView; 
-(id)_viewForViewState:(int)arg1 ;
-(id)_viewForCurrentViewState;
-(void)_initTableViewIfNecessary;
-(id)initWithLoadingText:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateContentInsets;
-(UITableView *)tableView;
-(void)setViewState:(int)arg1 ;
@end

