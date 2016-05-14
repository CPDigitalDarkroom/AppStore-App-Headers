/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBSettingsSearchResponderProtocol;
@class NSString, NSArray;

@interface FBSettingsSearchResultActionsController : NSObject <UITableViewDataSource, UITableViewDelegate> {

	NSString* _searchedKeywordInLowerCase;
	NSArray* _searchResultActions;
	id<FBSettingsSearchResponderProtocol> _responder;

}

@property (nonatomic,retain) NSString * searchedKeywordInLowerCase;                               //@synthesize searchedKeywordInLowerCase=_searchedKeywordInLowerCase - In the implementation block
@property (nonatomic,retain) NSArray * searchResultActions;                                       //@synthesize searchResultActions=_searchResultActions - In the implementation block
@property (assign,nonatomic,__weak) id<FBSettingsSearchResponderProtocol> responder;              //@synthesize responder=_responder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)searchedKeywordInLowerCase;
-(void)setSearchedKeywordInLowerCase:(NSString *)arg1 ;
-(void)setSearchResultActions:(NSArray *)arg1 ;
-(NSArray *)searchResultActions;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setResponder:(id<FBSettingsSearchResponderProtocol>)arg1 ;
-(id<FBSettingsSearchResponderProtocol>)responder;
@end

