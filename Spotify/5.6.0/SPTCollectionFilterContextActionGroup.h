/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTCollectionFilterContextActionGroup.h>
@class NSString;


@protocol SPTCollectionFilterContextActionGroup
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) int icon; 
@property (nonatomic,readonly) unsigned numberOfActions; 
@required
-(id)actionAtIndex:(unsigned)arg1;
-(NSString *)title;
-(int)icon;
-(unsigned)numberOfActions;

@end


@class NSString, NSArray;

@interface SPTCollectionFilterContextActionGroup : NSObject <SPTCollectionFilterContextActionGroup> {

	NSArray* _actions;
	NSString* _title;
	int _icon;

}

@property (nonatomic,retain) NSArray * actions;                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int icon;                                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) unsigned numberOfActions; 
-(id)initWithTitle:(id)arg1 icon:(int)arg2 actions:(id)arg3 ;
-(id)actionAtIndex:(unsigned)arg1 ;
-(id)initWithTitle:(id)arg1 actions:(id)arg2 ;
-(void)insertAction:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeActionAtIndex:(unsigned)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)actions;
-(NSString *)title;
-(void)setIcon:(int)arg1 ;
-(int)icon;
-(unsigned)numberOfActions;
@end

