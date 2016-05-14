/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBDetailComponentControllerDelegate;
@class FBDetailComponentCell, NSString;

@interface FBDetailComponentController : NSObject <UITableViewDataSource, UITableViewDelegate> {

	id<FBDetailComponentControllerDelegate> _delegate;
	FBDetailComponentCell* _cell;

}

@property (assign,nonatomic,__weak) id<FBDetailComponentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBDetailComponentCell * cell;                                       //@synthesize cell=_cell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentCell;
-(void)setupCell;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didReceiveNotification:(id)arg1 ;
-(void)setDelegate:(id<FBDetailComponentControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBDetailComponentControllerDelegate>)delegate;
-(FBDetailComponentCell *)cell;
@end

