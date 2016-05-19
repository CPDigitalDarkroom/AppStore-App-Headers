/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPredicate, NSNumber;

@interface MPObjectFilter : NSObject {

	NSString* _name;
	NSPredicate* _predicate;
	NSNumber* _index;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSNumber * index;                     //@synthesize index=_index - In the implementation block
-(char)appliesToAny:(id)arg1 ;
-(id)applyReverse:(id)arg1 ;
-(id)getChildrenOfObject:(id)arg1 ofType:(Class)arg2 ;
-(char)appliesTo:(id)arg1 ;
-(id)getParentsOfObject:(id)arg1 ;
-(char)isView:(id)arg1 siblingNumber:(unsigned)arg2 ;
-(id)apply:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSNumber *)index;
-(void)setIndex:(NSNumber *)arg1 ;
@end

