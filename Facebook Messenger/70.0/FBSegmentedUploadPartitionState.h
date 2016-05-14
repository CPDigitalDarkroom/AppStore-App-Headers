/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBUploadPartition, NSError;

@interface FBSegmentedUploadPartitionState : NSObject <NSCoding> {

	FBUploadPartition* _partition;
	NSError* _segmentError;
	int _numUploadRequestsInFlight;
	NSRange _nextChunkRangeInSegment;

}

@property (nonatomic,retain) FBUploadPartition * partition;                //@synthesize partition=_partition - In the implementation block
@property (nonatomic,retain) NSError * segmentError;                       //@synthesize segmentError=_segmentError - In the implementation block
@property (assign,nonatomic) NSRange nextChunkRangeInSegment;              //@synthesize nextChunkRangeInSegment=_nextChunkRangeInSegment - In the implementation block
@property (assign,nonatomic) int numUploadRequestsInFlight;                //@synthesize numUploadRequestsInFlight=_numUploadRequestsInFlight - In the implementation block
+(id)propertiesToSkipForCoding;
-(id)initWithPartition:(id)arg1 ;
-(FBUploadPartition *)partition;
-(NSRange)nextChunkRangeInSegment;
-(int)numUploadRequestsInFlight;
-(void)setNumUploadRequestsInFlight:(int)arg1 ;
-(void)setNextChunkRangeInSegment:(NSRange)arg1 ;
-(char)isUploadCompleted;
-(void)setSegmentError:(NSError *)arg1 ;
-(void)setPartition:(FBUploadPartition *)arg1 ;
-(NSError *)segmentError;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

