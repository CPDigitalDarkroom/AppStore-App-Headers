/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MPSurvey : NSObject {

	unsigned _ID;
	NSString* _name;
	unsigned _collectionID;
	NSArray* _questions;

}

@property (assign,nonatomic) unsigned ID;                        //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,retain) NSArray * questions;                //@synthesize questions=_questions - In the implementation block
+(id)surveyWithJSONObject:(id)arg1 ;
-(id)initWithID:(unsigned)arg1 name:(id)arg2 collectionID:(unsigned)arg3 andQuestions:(id)arg4 ;
-(void)setQuestions:(NSArray *)arg1 ;
-(NSArray *)questions;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)ID;
-(void)setID:(unsigned)arg1 ;
-(unsigned)collectionID;
-(void)setCollectionID:(unsigned)arg1 ;
@end

