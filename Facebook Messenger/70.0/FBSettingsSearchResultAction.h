/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBSettingsSearchResultAction : NSObject {

	NSString* _searchResultName;
	NSString* _searchResultKey;
	NSIndexPath* _atIndexPath;
	unsigned _actionType;
	FBSettingsSearchResultAction* _nextSearchResultAction;

}

@property (nonatomic,retain) FBSettingsSearchResultAction * nextSearchResultAction;              //@synthesize nextSearchResultAction=_nextSearchResultAction - In the implementation block
@property (nonatomic,readonly) NSString * searchResultName;                                      //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSString * searchResultKey;                                       //@synthesize searchResultKey=_searchResultKey - In the implementation block
@property (nonatomic,readonly) NSIndexPath * atIndexPath;                                        //@synthesize atIndexPath=_atIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned actionType;                                              //@synthesize actionType=_actionType - In the implementation block
+(id)createFromParentSearchResultAction:(id)arg1 searchResultActionName:(id)arg2 key:(id)arg3 indexPath:(id)arg4 actionType:(unsigned)arg5 ;
+(id)createSearchResultActionName:(id)arg1 key:(id)arg2 indexPaths:(id)arg3 actionType:(unsigned)arg4 ;
-(NSString *)searchResultName;
-(NSIndexPath *)atIndexPath;
-(FBSettingsSearchResultAction *)nextSearchResultAction;
-(NSString *)searchResultKey;
-(id)initWithSearchResultName:(id)arg1 key:(id)arg2 indexPath:(id)arg3 actionType:(unsigned)arg4 ;
-(void)setNextSearchResultAction:(FBSettingsSearchResultAction *)arg1 ;
-(id)allAtIndexPaths;
-(id)actionTypeString;
-(unsigned)actionType;
-(id)debugDescription;
@end

