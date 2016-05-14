/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBDetailComponentControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBScrolling.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSArray, FBTableViewAggregatedDataSource, NSString;

@interface FBDetailViewController : UIViewController <FBDetailComponentControllerDelegate, UIScrollViewDelegate, FBScrolling, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _componentControllers;
	FBTableViewAggregatedDataSource* _aggregatedDataSource;

}

@property (nonatomic,readonly) FBTableViewAggregatedDataSource * aggregatedDataSource;              //@synthesize aggregatedDataSource=_aggregatedDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * componentControllers;                                        //@synthesize componentControllers=_componentControllers - In the implementation block
@property (nonatomic,readonly) char hasHeaderView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableViewMutator;
-(void)_loadTableView;
-(void)_deliverNotification:(id)arg1 ;
-(FBTableViewAggregatedDataSource *)aggregatedDataSource;
-(void)tableViewDidLoad;
-(void)controller:(id)arg1 openURL:(id)arg2 ;
-(void)controller:(id)arg1 openViewController:(id)arg2 ;
-(void)updateTableHeaderViewHeight;
-(char)hasHeaderView;
-(void)setComponentControllers:(NSArray *)arg1 ;
-(NSArray *)componentControllers;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(UITableView *)tableView;
-(id)tableHeaderView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)headerView;
-(void)_loadHeaderView;
@end

